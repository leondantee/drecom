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

// Function: entry_001cb5c8
// Address: 0x1cb5c8 - 0x1cb63c
void entry_001cb5c8_0x1cb5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb5c8_0x1cb5c8");
#endif

    switch (ctx->pc) {
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb628u: goto label_1cb628;
        default: break;
    }

    ctx->pc = 0x1cb5c8u;

    // 0x1cb5c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5cc: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x1cb5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb5d0: 0xc057324  jal         func_15CC90
    ctx->pc = 0x1CB5D0u;
    SET_GPR_U32(ctx, 31, 0x1CB5D8u);
    ctx->pc = 0x15CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CC90u, 0x1CB5D0u, 0x1CB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5D8u;
label_1cb5d8:
    // 0x1cb5d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cb5d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cb5dc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CB5DCu;
    SET_GPR_U32(ctx, 31, 0x1CB5E4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CB5DCu, 0x1CB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb5e8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CB5E8u;
    SET_GPR_U32(ctx, 31, 0x1CB5F0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CB5E8u, 0x1CB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5F0u;
label_1cb5f0:
    // 0x1cb5f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb5f8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cb5fc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb600: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cb604: 0x24478b60  addiu       $a3, $v0, -0x74A0
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937440));
    // 0x1cb608: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CB608u;
    SET_GPR_U32(ctx, 31, 0x1CB610u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CB608u, 0x1CB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB610u;
label_1cb610:
    // 0x1cb610: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB63Cu;
            return;
        }
    }
    ctx->pc = 0x1CB618u;
    // 0x1cb618: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1cb61c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1cb620: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB620u;
    SET_GPR_U32(ctx, 31, 0x1CB628u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB620u, 0x1CB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB628u;
label_1cb628:
    // 0x1cb628: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x1cb628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x1cb62c: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x1cb62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x1cb630: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x1cb630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x1cb634: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1CB634u;
    SET_GPR_U32(ctx, 31, 0x1CB63Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1CB634u, 0x1CB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB63Cu;
}
