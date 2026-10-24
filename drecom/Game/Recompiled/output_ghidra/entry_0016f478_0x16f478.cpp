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

// Function: entry_0016f478
// Address: 0x16f478 - 0x16f4b0
void entry_0016f478_0x16f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f478_0x16f478");
#endif

    ctx->pc = 0x16f478u;

    // 0x16f478: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f47c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f484: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x16F484u;
    {
        const bool branch_taken_0x16f484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x16f484) {
            ctx->pc = 0x16F4B0u;
            return;
        }
    }
    ctx->pc = 0x16F48Cu;
    // 0x16f48c: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x16f48cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f490: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x16f490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16f494: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x16f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16f498: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F498u;
    {
        const bool branch_taken_0x16f498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f498) {
            ctx->pc = 0x16F4B0u;
            return;
        }
    }
    ctx->pc = 0x16F4A0u;
    // 0x16f4a0: 0x9613000c  lhu         $s3, 0xC($s0)
    ctx->pc = 0x16f4a0u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f4a4: 0x36620400  ori         $v0, $s3, 0x400
    ctx->pc = 0x16f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1024);
    // 0x16f4a8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4ac: 0x0  nop
    ctx->pc = 0x16f4acu;
    // NOP
    ctx->pc = 0x16f4b0u;
}
