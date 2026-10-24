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

// Function: entry_0027f230
// Address: 0x27f230 - 0x27f290
void entry_0027f230_0x27f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f230_0x27f230");
#endif

    switch (ctx->pc) {
        case 0x27f254u: goto label_27f254;
        case 0x27f260u: goto label_27f260;
        default: break;
    }

    ctx->pc = 0x27f230u;

    // 0x27f230: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27f230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27f234: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27f238: 0x24421dd0  addiu       $v0, $v0, 0x1DD0
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
    // 0x27f23c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x27f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f240: 0x24042600  addiu       $a0, $zero, 0x2600
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9728));
    // 0x27f244: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27f244u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f248: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27f248u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f24c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27F24Cu;
    SET_GPR_U32(ctx, 31, 0x27F254u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27F24Cu, 0x27F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F254u;
label_27f254:
    // 0x27f254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27f254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f258: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27F258u;
    SET_GPR_U32(ctx, 31, 0x27F260u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27F258u, 0x27F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F260u;
label_27f260:
    // 0x27f260: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x27f260u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27f264: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x27f264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27f268: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x27f268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x27f26c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27F26Cu;
    {
        const bool branch_taken_0x27f26c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f26c) {
            ctx->pc = 0x27F290u;
            return;
        }
    }
    ctx->pc = 0x27F274u;
    // 0x27f274: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27f278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f27c: 0x0  nop
    ctx->pc = 0x27f27cu;
    // NOP
    // 0x27f280: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x27f280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x27f284: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27f288: 0xa2220139  sb          $v0, 0x139($s1)
    ctx->pc = 0x27f288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 313), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f28c: 0x0  nop
    ctx->pc = 0x27f28cu;
    // NOP
    ctx->pc = 0x27f290u;
}
