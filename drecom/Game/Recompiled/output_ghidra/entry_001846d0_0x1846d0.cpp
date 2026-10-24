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

// Function: entry_001846d0
// Address: 0x1846d0 - 0x18471c
void entry_001846d0_0x1846d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001846d0_0x1846d0");
#endif

    ctx->pc = 0x1846d0u;

    // 0x1846d0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1846d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1846d4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1846d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1846d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1846d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1846dc: 0x0  nop
    ctx->pc = 0x1846dcu;
    // NOP
    // 0x1846e0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x1846E0u;
    {
        const bool branch_taken_0x1846e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1846e0) {
            ctx->pc = 0x184760u;
            return;
        }
    }
    ctx->pc = 0x1846E8u;
    // 0x1846e8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1846e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1846ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1846ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1846f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1846f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1846f4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1846f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1846f8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1846fc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1846fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x184700: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184700u;
    {
        const bool branch_taken_0x184700 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184700) {
            ctx->pc = 0x18471Cu;
            return;
        }
    }
    ctx->pc = 0x184708u;
    // 0x184708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18470c: 0x0  nop
    ctx->pc = 0x18470cu;
    // NOP
    // 0x184710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x184710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x184714: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x184714u;
    {
        const bool branch_taken_0x184714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184714) {
            ctx->pc = 0x184738u;
            return;
        }
    }
    ctx->pc = 0x18471Cu;
}
