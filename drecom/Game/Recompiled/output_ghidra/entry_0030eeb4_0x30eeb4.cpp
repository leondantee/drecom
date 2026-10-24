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

// Function: entry_0030eeb4
// Address: 0x30eeb4 - 0x30ef7c
void entry_0030eeb4_0x30eeb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030eeb4_0x30eeb4");
#endif

    switch (ctx->pc) {
        case 0x30ef00u: goto label_30ef00;
        case 0x30ef28u: goto label_30ef28;
        case 0x30ef3cu: goto label_30ef3c;
        case 0x30ef50u: goto label_30ef50;
        case 0x30ef64u: goto label_30ef64;
        case 0x30ef78u: goto label_30ef78;
        default: break;
    }

    ctx->pc = 0x30eeb4u;

    // 0x30eeb4: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x30eeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x30eeb8: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x30eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x30eebc: 0x248397b0  addiu       $v1, $a0, -0x6850
    ctx->pc = 0x30eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940592));
    // 0x30eec0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x30eec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30eec4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x30eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30eec8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30eecc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30eed0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30eed4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30eed8: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x30eed8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30eedc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x30eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30eee0: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x30eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x30eee4: 0x669821  addu        $s3, $v1, $a2
    ctx->pc = 0x30eee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30eee8: 0x3c033fc8  lui         $v1, 0x3FC8
    ctx->pc = 0x30eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16328 << 16));
    // 0x30eeec: 0x3465f5c3  ori         $a1, $v1, 0xF5C3
    ctx->pc = 0x30eeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30eef0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x30eef0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30eef4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x30eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30eef8: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30EEF8u;
    SET_GPR_U32(ctx, 31, 0x30EF00u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30EEF8u, 0x30EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF00u;
label_30ef00:
    // 0x30ef00: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef00u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef04: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30ef08: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x30ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ef0c: 0x3c03bfc8  lui         $v1, 0xBFC8
    ctx->pc = 0x30ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49096 << 16));
    // 0x30ef10: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x30ef10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62915);
    // 0x30ef14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30ef14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ef18: 0x0  nop
    ctx->pc = 0x30ef18u;
    // NOP
    // 0x30ef1c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x30ef1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30ef20: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30EF20u;
    SET_GPR_U32(ctx, 31, 0x30EF28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30EF20u, 0x30EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF28u;
label_30ef28:
    // 0x30ef28: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x30ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30ef2c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x30ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30ef30: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30ef30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30ef34: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30EF34u;
    SET_GPR_U32(ctx, 31, 0x30EF3Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30EF3Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF3Cu) { return; }
    ctx->pc = 0x30EF3Cu;
label_30ef3c:
    // 0x30ef3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef40: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30ef40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30ef44: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30ef48: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EF48u;
    SET_GPR_U32(ctx, 31, 0x30EF50u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EF50u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF50u) { return; }
    ctx->pc = 0x30EF50u;
label_30ef50:
    // 0x30ef50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef54: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30ef58: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x30ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x30ef5c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EF5Cu;
    SET_GPR_U32(ctx, 31, 0x30EF64u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EF64u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF64u) { return; }
    ctx->pc = 0x30EF64u;
label_30ef64:
    // 0x30ef64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x30ef64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30ef68: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30ef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30ef6c: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x30ef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x30ef70: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30EF70u;
    SET_GPR_U32(ctx, 31, 0x30EF78u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30EF78u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30EF78u) { return; }
    ctx->pc = 0x30EF78u;
label_30ef78:
    // 0x30ef78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x30ef78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x30ef7cu;
}
