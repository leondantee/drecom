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

// Function: entry_00299b14
// Address: 0x299b14 - 0x299b88
void entry_00299b14_0x299b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299b14_0x299b14");
#endif

    switch (ctx->pc) {
        case 0x299b4cu: goto label_299b4c;
        case 0x299b70u: goto label_299b70;
        default: break;
    }

    ctx->pc = 0x299b14u;

    // 0x299b14: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x299b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x299b18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x299b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x299b1c: 0x2650fff0  addiu       $s0, $s2, -0x10
    ctx->pc = 0x299b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x299b20: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x299b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x299b24: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x299b24u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x299b28: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x299b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x299b2c: 0x2021825  or          $v1, $s0, $v0
    ctx->pc = 0x299b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x299b30: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x299b30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x299b34: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x299b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299b38: 0xac5201cc  sw          $s2, 0x1CC($v0)
    ctx->pc = 0x299b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 460), GPR_U32(ctx, 18));
    // 0x299b3c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x299b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x299b40: 0xc46c01d4  lwc1        $f12, 0x1D4($v1)
    ctx->pc = 0x299b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299b44: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x299B44u;
    SET_GPR_U32(ctx, 31, 0x299B4Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x299B44u, 0x299B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B4Cu;
label_299b4c:
    // 0x299b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x299b50: 0x8c30013c  lw          $s0, 0x13C($at)
    ctx->pc = 0x299b50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x299b54: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x299b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x299b58: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x299b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x299b5c: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299b60: 0x8c243580  lw          $a0, 0x3580($at)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x853580u));
    // 0x299b64: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x299b64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299b68: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x299B68u;
    SET_GPR_U32(ctx, 31, 0x299B70u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x299B68u, 0x299B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B70u;
label_299b70:
    // 0x299b70: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x299b70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x299b74: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299b78: 0x8c233580  lw          $v1, 0x3580($at)
    ctx->pc = 0x299b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x853580u));
    // 0x299b7c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x299b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x299b80: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x299b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x299b84: 0xac233580  sw          $v1, 0x3580($at)
    ctx->pc = 0x299b84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x853580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x853580u, _value); } while (0);
    ctx->pc = 0x299b88u;
}
