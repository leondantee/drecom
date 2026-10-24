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

// Function: entry_00193558
// Address: 0x193558 - 0x193598
void entry_00193558_0x193558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193558_0x193558");
#endif

    ctx->pc = 0x193558u;

    // 0x193558: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19355c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19355cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193560: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x193560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x193564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193568: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x193568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19356c: 0x8ec20ab8  lw          $v0, 0xAB8($s6)
    ctx->pc = 0x19356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2744)));
    // 0x193570: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x193570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193574: 0x8ec20290  lw          $v0, 0x290($s6)
    ctx->pc = 0x193574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 656)));
    // 0x193578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19357c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19357Cu;
    {
        const bool branch_taken_0x19357c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19357c) {
            ctx->pc = 0x193598u;
            return;
        }
    }
    ctx->pc = 0x193584u;
    // 0x193584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193588: 0x0  nop
    ctx->pc = 0x193588u;
    // NOP
    // 0x19358c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19358cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193590: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193590u;
    {
        const bool branch_taken_0x193590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193590) {
            ctx->pc = 0x1935B4u;
            return;
        }
    }
    ctx->pc = 0x193598u;
}
