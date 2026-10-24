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

// Function: entry_0018a528
// Address: 0x18a528 - 0x18a590
void entry_0018a528_0x18a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a528_0x18a528");
#endif

    ctx->pc = 0x18a528u;

    // 0x18a528: 0x2e03001f  sltiu       $v1, $s0, 0x1F
    ctx->pc = 0x18a528u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x18a52c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18A52Cu;
    {
        const bool branch_taken_0x18a52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a52c) {
            ctx->pc = 0x18A510u;
            return;
        }
    }
    ctx->pc = 0x18A534u;
    // 0x18a534: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a538: 0x2463ef00  addiu       $v1, $v1, -0x1100
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
    // 0x18a53c: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x18a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x18a540: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a544: 0x2463afd0  addiu       $v1, $v1, -0x5030
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946768));
    // 0x18a548: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x18a548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x18a54c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a550: 0xac20fa28  sw          $zero, -0x5D8($at)
    ctx->pc = 0x18a550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x53FA28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53FA28u, _value); } while (0);
    // 0x18a554: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a558: 0x2463fa30  addiu       $v1, $v1, -0x5D0
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x18a55c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18a560: 0xac23fa2c  sw          $v1, -0x5D4($at)
    ctx->pc = 0x18a560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53FA2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53FA2Cu, _value); } while (0);
    // 0x18a564: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x18a564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x18a568: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x18a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x18a56c: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a570: 0xac23baf8  sw          $v1, -0x4508($at)
    ctx->pc = 0x18a570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x56BAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56BAF8u, _value); } while (0);
    // 0x18a574: 0x3c010057  lui         $at, 0x57
    ctx->pc = 0x18a574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)87 << 16));
    // 0x18a578: 0xac20bafc  sw          $zero, -0x4504($at)
    ctx->pc = 0x18a578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x56BAFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x56BAFCu, _value); } while (0);
    // 0x18a57c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x18a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x18a580: 0x2476fa30  addiu       $s6, $v1, -0x5D0
    ctx->pc = 0x18a580u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965808));
    // 0x18a584: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18A588u;
    {
        const bool branch_taken_0x18a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a588) {
            ctx->pc = 0x18A5A8u;
            return;
        }
    }
    ctx->pc = 0x18A590u;
}
