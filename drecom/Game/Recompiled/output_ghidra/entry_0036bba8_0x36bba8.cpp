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

// Function: entry_0036bba8
// Address: 0x36bba8 - 0x36bc18
void entry_0036bba8_0x36bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036bba8_0x36bba8");
#endif

    ctx->pc = 0x36bba8u;

    // 0x36bba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x36bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36bbac: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x36bbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x36bbb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bbb4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36bbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x36bbb8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x36BBB8u;
    {
        const bool branch_taken_0x36bbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bbb8) {
            ctx->pc = 0x36BD20u;
            return;
        }
    }
    ctx->pc = 0x36BBC0u;
    // 0x36bbc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36bbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36bbc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36bbc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36bbcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36bbd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bbd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bbd8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x36bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36bbdc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36bbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36bbe0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x36bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x36bbe4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36bbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36bbe8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36bbec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36bbf0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x36bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x36bbf4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x36bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x36bbf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x36bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x36bbfc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x36bbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x36bc00: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x36bc00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x36bc04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36bc08: 0x30540003  andi        $s4, $v0, 0x3
    ctx->pc = 0x36bc08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36bc0c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x36bc0cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36bc10: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x36BC10u;
    {
        const bool branch_taken_0x36bc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bc10) {
            ctx->pc = 0x36BD10u;
            return;
        }
    }
    ctx->pc = 0x36BC18u;
}
