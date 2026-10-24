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

// Function: entry_00244ca0
// Address: 0x244ca0 - 0x244d20
void entry_00244ca0_0x244ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244ca0_0x244ca0");
#endif

    ctx->pc = 0x244ca0u;

    // 0x244ca0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244ca4: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x244ca4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x244ca8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x244CA8u;
    {
        const bool branch_taken_0x244ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ca8) {
            ctx->pc = 0x244D20u;
            return;
        }
    }
    ctx->pc = 0x244CB0u;
    // 0x244cb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244cb4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244cb8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x244cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244cbc: 0x3c043c49  lui         $a0, 0x3C49
    ctx->pc = 0x244cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15433 << 16));
    // 0x244cc0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x244cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x244cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244cc8: 0x0  nop
    ctx->pc = 0x244cc8u;
    // NOP
    // 0x244ccc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x244cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244cd0: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x244cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x244cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244cd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244cdc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244ce0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x244ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x244ce4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244ce8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244ce8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244cec: 0x0  nop
    ctx->pc = 0x244cecu;
    // NOP
    // 0x244cf0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244cf4: 0x0  nop
    ctx->pc = 0x244cf4u;
    // NOP
    // 0x244cf8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x244CF8u;
    {
        const bool branch_taken_0x244cf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244cf8) {
            ctx->pc = 0x244D88u;
            return;
        }
    }
    ctx->pc = 0x244D00u;
    // 0x244d00: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x244d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x244d04: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x244d08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x244d08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244d0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244d10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244d14: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x244d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x244d18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x244D18u;
    {
        const bool branch_taken_0x244d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d18) {
            ctx->pc = 0x244D88u;
            return;
        }
    }
    ctx->pc = 0x244D20u;
}
