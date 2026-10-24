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

// Function: entry_0036d848
// Address: 0x36d848 - 0x36d8dc
void entry_0036d848_0x36d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d848_0x36d848");
#endif

    switch (ctx->pc) {
        case 0x36d858u: goto label_36d858;
        case 0x36d86cu: goto label_36d86c;
        case 0x36d880u: goto label_36d880;
        case 0x36d890u: goto label_36d890;
        case 0x36d8a4u: goto label_36d8a4;
        default: break;
    }

    ctx->pc = 0x36d848u;

    // 0x36d848: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d84c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x36d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d850: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x36D850u;
    SET_GPR_U32(ctx, 31, 0x36D858u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x36D850u, 0x36D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D858u;
label_36d858:
    // 0x36d858: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d85c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d860: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d864: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x36D864u;
    SET_GPR_U32(ctx, 31, 0x36D86Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x36D86Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D86Cu) { return; }
    ctx->pc = 0x36D86Cu;
label_36d86c:
    // 0x36d86c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d870: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36d870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d874: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x36d874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d878: 0xc040ce4  jal         func_103390
    ctx->pc = 0x36D878u;
    SET_GPR_U32(ctx, 31, 0x36D880u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x36D880u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D880u) { return; }
    ctx->pc = 0x36D880u;
label_36d880:
    // 0x36d880: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36d884: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x36d884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d888: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36D888u;
    SET_GPR_U32(ctx, 31, 0x36D890u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36D890u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D890u) { return; }
    ctx->pc = 0x36D890u;
label_36d890:
    // 0x36d890: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36d890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d894: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36d894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d898: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x36d898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x36d89c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36D89Cu;
    SET_GPR_U32(ctx, 31, 0x36D8A4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36D8A4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D8A4u) { return; }
    ctx->pc = 0x36D8A4u;
label_36d8a4:
    // 0x36d8a4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x36d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36d8a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d8ac: 0x106200a4  beq         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x36D8ACu;
    {
        const bool branch_taken_0x36d8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d8ac) {
            ctx->pc = 0x36DB40u;
            return;
        }
    }
    ctx->pc = 0x36D8B4u;
    // 0x36d8b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d8b8: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x36D8B8u;
    {
        const bool branch_taken_0x36d8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d8b8) {
            ctx->pc = 0x36DA78u;
            return;
        }
    }
    ctx->pc = 0x36D8C0u;
    // 0x36d8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d8c4: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x36D8C4u;
    {
        const bool branch_taken_0x36d8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d8c4) {
            ctx->pc = 0x36D9B0u;
            return;
        }
    }
    ctx->pc = 0x36D8CCu;
    // 0x36d8cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x36D8CCu;
    {
        const bool branch_taken_0x36d8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d8cc) {
            ctx->pc = 0x36D924u;
            return;
        }
    }
    ctx->pc = 0x36D8D4u;
    // 0x36d8d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36D8D4u;
    {
        const bool branch_taken_0x36d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d8d4) {
            ctx->pc = 0x36D8DCu;
            return;
        }
    }
    ctx->pc = 0x36D8DCu;
}
