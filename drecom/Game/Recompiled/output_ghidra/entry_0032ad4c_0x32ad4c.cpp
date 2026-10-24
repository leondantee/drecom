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

// Function: entry_0032ad4c
// Address: 0x32ad4c - 0x32ada4
void entry_0032ad4c_0x32ad4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ad4c_0x32ad4c");
#endif

    ctx->pc = 0x32ad4cu;

    // 0x32ad4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32ad4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32ad50: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x32ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x32ad54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad58: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x32AD58u;
    {
        const bool branch_taken_0x32ad58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ad58) {
            ctx->pc = 0x32ADA4u;
            return;
        }
    }
    ctx->pc = 0x32AD60u;
    // 0x32ad60: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad64: 0x8c23af70  lw          $v1, -0x5090($at)
    ctx->pc = 0x32ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32ad68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32ad6c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32AD6Cu;
    {
        const bool branch_taken_0x32ad6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ad6c) {
            ctx->pc = 0x32ADA4u;
            return;
        }
    }
    ctx->pc = 0x32AD74u;
    // 0x32ad74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ad78: 0xa20328b9  sb          $v1, 0x28B9($s0)
    ctx->pc = 0x32ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10425), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ad7c: 0xa20028ba  sb          $zero, 0x28BA($s0)
    ctx->pc = 0x32ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10426), (uint8_t)GPR_U32(ctx, 0));
    // 0x32ad80: 0xae0028bc  sw          $zero, 0x28BC($s0)
    ctx->pc = 0x32ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10428), GPR_U32(ctx, 0));
    // 0x32ad84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ad88: 0xa20328c0  sb          $v1, 0x28C0($s0)
    ctx->pc = 0x32ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10432), (uint8_t)GPR_U32(ctx, 3));
    // 0x32ad8c: 0xae0028c4  sw          $zero, 0x28C4($s0)
    ctx->pc = 0x32ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10436), GPR_U32(ctx, 0));
    // 0x32ad90: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ad94: 0x8c23af70  lw          $v1, -0x5090($at)
    ctx->pc = 0x32ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF70u));
    // 0x32ad98: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x32ad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x32ad9c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32ad9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32ada0: 0xac23af70  sw          $v1, -0x5090($at)
    ctx->pc = 0x32ada0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF70u, _value); } while (0);
    ctx->pc = 0x32ada4u;
}
