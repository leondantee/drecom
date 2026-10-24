#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001ee198
// Address: 0x1ee198 - 0x1ee2b4
void entry_001ee198_0x1ee198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee198_0x1ee198");
#endif

    ctx->pc = 0x1ee198u;

    // 0x1ee198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee19c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1a0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ee1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee1a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1a8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1ee1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1b0: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1ee1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1b4: 0x3c05c100  lui         $a1, 0xC100
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49408 << 16));
    // 0x1ee1b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee1b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1c0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee1c4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ee1c8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1ee1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee1cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee1ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1d4: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee1d8: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1ee1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1ee1dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee1ec: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee1f0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1ee1f4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x1ee1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ee1f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee1f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee200: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee204: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ee204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ee208: 0x3c053d49  lui         $a1, 0x3D49
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee20c: 0x34a20fdb  ori         $v0, $a1, 0xFDB
    ctx->pc = 0x1ee20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1ee210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee21c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ee220: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee224: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1ee224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee234: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ee238: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee23c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee240: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ee244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ee248: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE2B4u;
            return;
        }
    }
    ctx->pc = 0x1EE250u;
    // 0x1ee250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee254: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee258: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1ee258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee25c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1ee25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1ee260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee264: 0x0  nop
    ctx->pc = 0x1ee264u;
    // NOP
    // 0x1ee268: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee26c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee270: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee27c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee280: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ee280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ee284: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1ee288: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee290: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee294: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee298: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ee298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1ee29c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ee29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee2a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee2a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2ac: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2b0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ee2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    ctx->pc = 0x1ee2b4u;
}
