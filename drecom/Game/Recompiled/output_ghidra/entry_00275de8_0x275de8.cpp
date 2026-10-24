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

// Function: entry_00275de8
// Address: 0x275de8 - 0x275e50
void entry_00275de8_0x275de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275de8_0x275de8");
#endif

    ctx->pc = 0x275de8u;

    // 0x275de8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275dec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x275decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x275df0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x275df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x275df4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275df8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275dfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x275dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x275e00: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x275e00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x275e04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275e08: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x275e08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x275e0c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x275e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x275e10: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275e18: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x275e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x275e1c: 0x3aa02  srl         $s5, $v1, 8
    ctx->pc = 0x275e1cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x275e20: 0xb5a821  addu        $s5, $a1, $s5
    ctx->pc = 0x275e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x275e24: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x275e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x275e28: 0xac357508  sw          $s5, 0x7508($at)
    ctx->pc = 0x275e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x275e2c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x275e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x275e30: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x275e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x275e34: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275E34u;
    {
        const bool branch_taken_0x275e34 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x275e34) {
            ctx->pc = 0x275E50u;
            return;
        }
    }
    ctx->pc = 0x275E3Cu;
    // 0x275e3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275e3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275e40: 0x0  nop
    ctx->pc = 0x275e40u;
    // NOP
    // 0x275e44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x275e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x275e48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275E48u;
    {
        const bool branch_taken_0x275e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275e48) {
            ctx->pc = 0x275E6Cu;
            return;
        }
    }
    ctx->pc = 0x275E50u;
}
