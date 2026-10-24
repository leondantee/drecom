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

// Function: entry_001fd11c
// Address: 0x1fd11c - 0x1fd170
void entry_001fd11c_0x1fd11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd11c_0x1fd11c");
#endif

    switch (ctx->pc) {
        case 0x1fd14cu: goto label_1fd14c;
        default: break;
    }

    ctx->pc = 0x1fd11cu;

    // 0x1fd11c: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FD11Cu;
    {
        const bool branch_taken_0x1fd11c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd11c) {
            ctx->pc = 0x1FD308u;
            return;
        }
    }
    ctx->pc = 0x1FD124u;
    // 0x1fd124: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd128: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd12c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fd12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fd130: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fd134: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd138: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fd138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd13c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1fd13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fd140: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd144: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FD144u;
    SET_GPR_U32(ctx, 31, 0x1FD14Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FD144u, 0x1FD14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD14Cu;
label_1fd14c:
    // 0x1fd14c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1fd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fd150: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fd150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fd154: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD154u;
    {
        const bool branch_taken_0x1fd154 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fd154) {
            ctx->pc = 0x1FD170u;
            return;
        }
    }
    ctx->pc = 0x1FD15Cu;
    // 0x1fd15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fd15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd160: 0x0  nop
    ctx->pc = 0x1fd160u;
    // NOP
    // 0x1fd164: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fd164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fd168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD18Cu;
            return;
        }
    }
    ctx->pc = 0x1FD170u;
}
