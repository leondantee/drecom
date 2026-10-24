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

// Function: entry_0029a488
// Address: 0x29a488 - 0x29a4d0
void entry_0029a488_0x29a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029a488_0x29a488");
#endif

    switch (ctx->pc) {
        case 0x29a4b4u: goto label_29a4b4;
        case 0x29a4ccu: goto label_29a4cc;
        default: break;
    }

    ctx->pc = 0x29a488u;

    // 0x29a488: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x29a488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29a48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29a490: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29a490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29a494: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x29a494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29a498: 0x1440ff20  bnez        $v0, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x29A498u;
    {
        const bool branch_taken_0x29a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a498) {
            ctx->pc = 0x29A11Cu;
            return;
        }
    }
    ctx->pc = 0x29A4A0u;
    // 0x29a4a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a4a4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x29a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x29a4a8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x29a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a4ac: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x29A4ACu;
    SET_GPR_U32(ctx, 31, 0x29A4B4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x29A4B4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A4B4u) { return; }
    ctx->pc = 0x29A4B4u;
label_29a4b4:
    // 0x29a4b4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x29a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x29a4b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x29a4b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a4bc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x29a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x29a4c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x29a4c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29a4c4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x29A4C4u;
    SET_GPR_U32(ctx, 31, 0x29A4CCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x29A4CCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x29A4CCu) { return; }
    ctx->pc = 0x29A4CCu;
label_29a4cc:
    // 0x29a4cc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x29a4ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->pc = 0x29a4d0u;
}
