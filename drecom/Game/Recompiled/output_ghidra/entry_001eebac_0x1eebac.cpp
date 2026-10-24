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

// Function: entry_001eebac
// Address: 0x1eebac - 0x1eec2c
void entry_001eebac_0x1eebac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eebac_0x1eebac");
#endif

    ctx->pc = 0x1eebacu;

    // 0x1eebac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eebb0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1eebb4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EEBB4u;
    {
        const bool branch_taken_0x1eebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebb4) {
            ctx->pc = 0x1EEC2Cu;
            return;
        }
    }
    ctx->pc = 0x1EEBBCu;
    // 0x1eebbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eebc0: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eebc4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1eebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eebc8: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x1eebcc: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1eebccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eebd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eebd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebd4: 0x0  nop
    ctx->pc = 0x1eebd4u;
    // NOP
    // 0x1eebd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eebd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eebdc: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1eebdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1eebe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eebe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eebe8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1eebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eebec: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1eebf0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1eebf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eebf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1eebf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebf8: 0x0  nop
    ctx->pc = 0x1eebf8u;
    // NOP
    // 0x1eebfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1eebfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eec00: 0x0  nop
    ctx->pc = 0x1eec00u;
    // NOP
    // 0x1eec04: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1EEC04u;
    {
        const bool branch_taken_0x1eec04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eec04) {
            ctx->pc = 0x1EEC94u;
            return;
        }
    }
    ctx->pc = 0x1EEC0Cu;
    // 0x1eec0c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1eec10: 0x34860fdb  ori         $a2, $a0, 0xFDB
    ctx->pc = 0x1eec10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1eec14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1eec14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec1c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1eec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec20: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1eec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1eec24: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EEC24u;
    {
        const bool branch_taken_0x1eec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec24) {
            ctx->pc = 0x1EEC94u;
            return;
        }
    }
    ctx->pc = 0x1EEC2Cu;
}
