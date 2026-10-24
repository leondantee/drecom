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

// Function: entry_0012a93c
// Address: 0x12a93c - 0x12a9b8
void entry_0012a93c_0x12a93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a93c_0x12a93c");
#endif

    switch (ctx->pc) {
        case 0x12a974u: goto label_12a974;
        default: break;
    }

    ctx->pc = 0x12a93cu;

    // 0x12a93c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a940: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x12a944: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x12a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x12a948: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x12A948u;
    {
        const bool branch_taken_0x12a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a948) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A950u;
    // 0x12a950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a954: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12a954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12a958: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12a958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12a95c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12a960: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a964: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12A964u;
    {
        const bool branch_taken_0x12a964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a964) {
            ctx->pc = 0x12A9B8u;
            return;
        }
    }
    ctx->pc = 0x12A96Cu;
    // 0x12a96c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A96Cu;
    SET_GPR_U32(ctx, 31, 0x12A974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A96Cu, 0x12A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A974u;
label_12a974:
    // 0x12a974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a978: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a97c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x12A97Cu;
    {
        const bool branch_taken_0x12a97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a97c) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A984u;
    // 0x12a984: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a988: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a98c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12a990: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a994: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a998: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a99c: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a9a0: 0x3c03ebff  lui         $v1, 0xEBFF
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60415 << 16));
    // 0x12a9a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a9a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a9ac: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a9b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12A9B0u;
    {
        const bool branch_taken_0x12a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9b0) {
            ctx->pc = 0x12A9FCu;
            return;
        }
    }
    ctx->pc = 0x12A9B8u;
}
