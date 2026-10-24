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

// Function: entry_00313060
// Address: 0x313060 - 0x3130cc
void entry_00313060_0x313060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313060_0x313060");
#endif

    ctx->pc = 0x313060u;

    // 0x313060: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313064: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313064u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313068: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31306c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313074: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313078: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31307c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31307cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313080: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313084: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313088: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31308c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313090: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313094: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313098: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31309c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31309cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3130a0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3130a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3130a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3130a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3130a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3130a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3130ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3130ACu;
    {
        const bool branch_taken_0x3130ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130ac) {
            ctx->pc = 0x3130CCu;
            return;
        }
    }
    ctx->pc = 0x3130B4u;
    // 0x3130b4: 0xa200011c  sb          $zero, 0x11C($s0)
    ctx->pc = 0x3130b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x3130b8: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x3130b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x3130bc: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x3130bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x3130c0: 0xae02020c  sw          $v0, 0x20C($s0)
    ctx->pc = 0x3130c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 2));
    // 0x3130c4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3130C4u;
    {
        const bool branch_taken_0x3130c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130c4) {
            ctx->pc = 0x313190u;
            return;
        }
    }
    ctx->pc = 0x3130CCu;
}
