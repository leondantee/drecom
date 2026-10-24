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

// Function: entry_0036cc50
// Address: 0x36cc50 - 0x36cce8
void entry_0036cc50_0x36cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036cc50_0x36cc50");
#endif

    ctx->pc = 0x36cc50u;

    // 0x36cc50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc54: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36cc58: 0x244204b0  addiu       $v0, $v0, 0x4B0
    ctx->pc = 0x36cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x36cc5c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x36cc5cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36cc60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cc64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc6c: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cc70: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36cc74: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x36cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x36cc78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cc7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cc80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc88: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cc8c: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x36cc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36cc90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cc94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36cc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36cc9c: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36cca0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36cca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36cca4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36cca8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ccac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ccb0: 0x8c4201ac  lw          $v0, 0x1AC($v0)
    ctx->pc = 0x36ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36ccb4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36ccb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ccb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36ccbc: 0xc44200d4  lwc1        $f2, 0xD4($v0)
    ctx->pc = 0x36ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ccc0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x36ccc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36ccc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36ccc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36ccc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36cccc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36CCCCu;
    {
        const bool branch_taken_0x36cccc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x36cccc) {
            ctx->pc = 0x36CCE8u;
            return;
        }
    }
    ctx->pc = 0x36CCD4u;
    // 0x36ccd4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x36ccd4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ccd8: 0x0  nop
    ctx->pc = 0x36ccd8u;
    // NOP
    // 0x36ccdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36ccdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36cce0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36CCE0u;
    {
        const bool branch_taken_0x36cce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36cce0) {
            ctx->pc = 0x36CD04u;
            return;
        }
    }
    ctx->pc = 0x36CCE8u;
}
