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

// Function: entry_0018c100
// Address: 0x18c100 - 0x18c130
void entry_0018c100_0x18c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c100_0x18c100");
#endif

    ctx->pc = 0x18c100u;

    // 0x18c100: 0x9202013b  lbu         $v0, 0x13B($s0)
    ctx->pc = 0x18c100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 315)));
    // 0x18c104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c108: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18C108u;
    {
        const bool branch_taken_0x18c108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c108) {
            ctx->pc = 0x18C13Cu;
            return;
        }
    }
    ctx->pc = 0x18C110u;
    // 0x18c110: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18c114: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C114u;
    {
        const bool branch_taken_0x18c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c114) {
            ctx->pc = 0x18C130u;
            return;
        }
    }
    ctx->pc = 0x18C11Cu;
    // 0x18c11c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18c120: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x18c120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x18c124: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18c124u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18c128: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x18C128u;
    {
        const bool branch_taken_0x18c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c128) {
            ctx->pc = 0x18C264u;
            return;
        }
    }
    ctx->pc = 0x18C130u;
}
