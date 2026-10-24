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

// Function: entry_00244678
// Address: 0x244678 - 0x244768
void entry_00244678_0x244678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244678_0x244678");
#endif

    ctx->pc = 0x244678u;

    // 0x244678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24467c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244680: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x244684: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244688: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x244688u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x24468c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244690: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x244690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x244694: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x244694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x244698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24469c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446a4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2446a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2446a8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2446a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2446ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2446acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446b8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2446b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2446bc: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2446c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2446c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446cc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2446ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2446d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2446d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2446d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2446d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446e0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2446e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2446e4: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x2446e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x2446e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2446e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2446ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2446ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2446f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2446f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2446f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2446f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2446f8: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2446f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2446fc: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x244700: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x244700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24470c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244710: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x244714: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244718: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x244718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24471c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x244720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244724: 0x0  nop
    ctx->pc = 0x244724u;
    // NOP
    // 0x244728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24472c: 0x0  nop
    ctx->pc = 0x24472cu;
    // NOP
    // 0x244730: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x244730u;
    {
        const bool branch_taken_0x244730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244730) {
            ctx->pc = 0x244768u;
            return;
        }
    }
    ctx->pc = 0x244738u;
    // 0x244738: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x24473c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24473cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244744: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244748: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24474c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x24474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x244750: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x244750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x244754: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24475c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244760: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244764: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->pc = 0x244768u;
}
