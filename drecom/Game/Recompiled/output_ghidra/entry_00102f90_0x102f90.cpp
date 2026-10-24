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

// Function: entry_00102f90
// Address: 0x102f90 - 0x102fac
void entry_00102f90_0x102f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102f90_0x102f90");
#endif

    ctx->pc = 0x102f90u;

label_102f90:
    // 0x102f90: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x102f90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x102f94: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x102f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x102f98: 0x3122000c  andi        $v0, $t1, 0xC
    ctx->pc = 0x102f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12);
    // 0x102f9c: 0x0  nop
    ctx->pc = 0x102f9cu;
    // NOP
    // 0x102fa0: 0x0  nop
    ctx->pc = 0x102fa0u;
    // NOP
    // 0x102fa4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102FA4u;
    {
        const bool branch_taken_0x102fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102fa4) {
            ctx->pc = 0x102F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102f90;
        }
    }
    ctx->pc = 0x102FACu;
}
