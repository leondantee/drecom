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

// Function: entry_00335928
// Address: 0x335928 - 0x33594c
void entry_00335928_0x335928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335928_0x335928");
#endif

    switch (ctx->pc) {
        case 0x335940u: goto label_335940;
        default: break;
    }

    ctx->pc = 0x335928u;

    // 0x335928: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x335928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x33592c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335930: 0x2442663e  addiu       $v0, $v0, 0x663E
    ctx->pc = 0x335930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x335934: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335938: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x335938u;
    SET_GPR_U32(ctx, 31, 0x335940u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x335938u, 0x335940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335940u;
label_335940:
    // 0x335940: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x335940u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335944: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x335944u;
    {
        const bool branch_taken_0x335944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x335944) {
            ctx->pc = 0x335950u;
            return;
        }
    }
    ctx->pc = 0x33594Cu;
}
