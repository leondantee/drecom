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

// Function: entry_00294b68
// Address: 0x294b68 - 0x294bcc
void entry_00294b68_0x294b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294b68_0x294b68");
#endif

    ctx->pc = 0x294b68u;

    // 0x294b68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b6c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b70: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294b80: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294b84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294b88: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294b8c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294b90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294b98: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294b9c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294ba0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294ba4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294ba8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294bac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294bb0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294BB0u;
    {
        const bool branch_taken_0x294bb0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x294bb0) {
            ctx->pc = 0x294BCCu;
            return;
        }
    }
    ctx->pc = 0x294BB8u;
    // 0x294bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294bbc: 0x0  nop
    ctx->pc = 0x294bbcu;
    // NOP
    // 0x294bc0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294bc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x294BC4u;
    {
        const bool branch_taken_0x294bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294bc4) {
            ctx->pc = 0x294BE8u;
            return;
        }
    }
    ctx->pc = 0x294BCCu;
}
