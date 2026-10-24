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

// Function: entry_00134530
// Address: 0x134530 - 0x1345ac
void entry_00134530_0x134530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134530_0x134530");
#endif

    ctx->pc = 0x134530u;

    // 0x134530: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134534: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134538: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x134538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13453c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13453cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134540: 0x0  nop
    ctx->pc = 0x134540u;
    // NOP
    // 0x134544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134548: 0x0  nop
    ctx->pc = 0x134548u;
    // NOP
    // 0x13454c: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x13454Cu;
    {
        const bool branch_taken_0x13454c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13454c) {
            ctx->pc = 0x1345C4u;
            return;
        }
    }
    ctx->pc = 0x134554u;
    // 0x134554: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x134554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134558: 0x8ca402d0  lw          $a0, 0x2D0($a1)
    ctx->pc = 0x134558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x13455c: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x13455cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134560: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x134560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134564: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13456c: 0x0  nop
    ctx->pc = 0x13456cu;
    // NOP
    // 0x134570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134574: 0x0  nop
    ctx->pc = 0x134574u;
    // NOP
    // 0x134578: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134578u;
    {
        const bool branch_taken_0x134578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134578) {
            ctx->pc = 0x1345ACu;
            return;
        }
    }
    ctx->pc = 0x134580u;
    // 0x134580: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134584: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134588: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x134588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13458c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x13458cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x134590: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134594: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134598: 0x0  nop
    ctx->pc = 0x134598u;
    // NOP
    // 0x13459c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13459cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1345a0: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x1345a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x1345a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1345A4u;
    {
        const bool branch_taken_0x1345a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1345a4) {
            ctx->pc = 0x13462Cu;
            return;
        }
    }
    ctx->pc = 0x1345ACu;
}
