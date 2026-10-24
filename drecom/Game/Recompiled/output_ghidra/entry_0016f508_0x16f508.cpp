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

// Function: entry_0016f508
// Address: 0x16f508 - 0x16f558
void entry_0016f508_0x16f508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f508_0x16f508");
#endif

    ctx->pc = 0x16f508u;

    // 0x16f508: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f50c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16f50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f510: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x16f510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x16f514: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F514u;
    {
        const bool branch_taken_0x16f514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f514) {
            ctx->pc = 0x16F558u;
            return;
        }
    }
    ctx->pc = 0x16F51Cu;
    // 0x16f51c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f520: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f524: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x16f524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x16f528: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x16F528u;
    {
        const bool branch_taken_0x16f528 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f528) {
            ctx->pc = 0x16F558u;
            return;
        }
    }
    ctx->pc = 0x16F530u;
    // 0x16f530: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x16f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x16f534: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x16f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x16f538: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x16f538u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x16f53c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f53cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f540: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x16f540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x16f544: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f544u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f548: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f548u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f54c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16f54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16f550: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f550u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f554: 0x0  nop
    ctx->pc = 0x16f554u;
    // NOP
    ctx->pc = 0x16f558u;
}
