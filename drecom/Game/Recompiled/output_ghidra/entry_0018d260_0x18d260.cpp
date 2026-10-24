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

// Function: entry_0018d260
// Address: 0x18d260 - 0x18d2a8
void entry_0018d260_0x18d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d260_0x18d260");
#endif

    ctx->pc = 0x18d260u;

    // 0x18d260: 0x92040342  lbu         $a0, 0x342($s0)
    ctx->pc = 0x18d260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 834)));
    // 0x18d264: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18d26c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x18d270: 0x24427290  addiu       $v0, $v0, 0x7290
    ctx->pc = 0x18d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29328));
    // 0x18d274: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d278: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x18d278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d27c: 0xfe020aa8  sd          $v0, 0xAA8($s0)
    ctx->pc = 0x18d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2728), GPR_U64(ctx, 2));
    // 0x18d280: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18d280u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18d284: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x18d284u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18d288: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x18d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x18d28c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D28Cu;
    {
        const bool branch_taken_0x18d28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d28c) {
            ctx->pc = 0x18D2A8u;
            return;
        }
    }
    ctx->pc = 0x18D294u;
    // 0x18d294: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x18d294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x18d298: 0x34423011  ori         $v0, $v0, 0x3011
    ctx->pc = 0x18d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12305);
    // 0x18d29c: 0xfe020ab0  sd          $v0, 0xAB0($s0)
    ctx->pc = 0x18d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2736), GPR_U64(ctx, 2));
    // 0x18d2a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18D2A0u;
    {
        const bool branch_taken_0x18d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2a0) {
            ctx->pc = 0x18D2B4u;
            return;
        }
    }
    ctx->pc = 0x18D2A8u;
}
