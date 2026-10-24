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

// Function: entry_001ee520
// Address: 0x1ee520 - 0x1ee564
void entry_001ee520_0x1ee520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee520_0x1ee520");
#endif

    switch (ctx->pc) {
        case 0x1ee560u: goto label_1ee560;
        default: break;
    }

    ctx->pc = 0x1ee520u;

    // 0x1ee520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee524: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1ee524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee528: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ee528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ee52c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ee52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ee530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee534: 0x0  nop
    ctx->pc = 0x1ee534u;
    // NOP
    // 0x1ee538: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ee538u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee53c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee544: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1ee544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee548: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee54c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ee54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ee550: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x1ee550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1ee554: 0xc4cd003c  lwc1        $f13, 0x3C($a2)
    ctx->pc = 0x1ee554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee558: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE558u;
    SET_GPR_U32(ctx, 31, 0x1EE560u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE558u, 0x1EE560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE560u;
label_1ee560:
    // 0x1ee560: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->pc = 0x1ee564u;
}
