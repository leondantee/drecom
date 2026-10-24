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

// Function: entry_001c4ae0
// Address: 0x1c4ae0 - 0x1c4bb0
void entry_001c4ae0_0x1c4ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ae0_0x1c4ae0");
#endif

    switch (ctx->pc) {
        case 0x1c4b18u: goto label_1c4b18;
        case 0x1c4b3cu: goto label_1c4b3c;
        case 0x1c4b48u: goto label_1c4b48;
        case 0x1c4b5cu: goto label_1c4b5c;
        case 0x1c4b80u: goto label_1c4b80;
        case 0x1c4b94u: goto label_1c4b94;
        default: break;
    }

    ctx->pc = 0x1c4ae0u;

    // 0x1c4ae0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4ae4: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4ae8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4aec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4af0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4af4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x1c4af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x1c4af8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C4AF8u;
    {
        const bool branch_taken_0x1c4af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4af8) {
            ctx->pc = 0x1C4BB0u;
            return;
        }
    }
    ctx->pc = 0x1C4B00u;
    // 0x1c4b00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b08: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1c4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4b0c: 0xc44d137c  lwc1        $f13, 0x137C($v0)
    ctx->pc = 0x1c4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c4b10: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C4B10u;
    SET_GPR_U32(ctx, 31, 0x1C4B18u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C4B10u, 0x1C4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B18u;
label_1c4b18:
    // 0x1c4b18: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c4b1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b20: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1c4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c4b24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b2c: 0x246506f0  addiu       $a1, $v1, 0x6F0
    ctx->pc = 0x1c4b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1c4b30: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1c4b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c4b34: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C4B34u;
    SET_GPR_U32(ctx, 31, 0x1C4B3Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C4B34u, 0x1C4B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B3Cu;
label_1c4b3c:
    // 0x1c4b3c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c4b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b40: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1C4B40u;
    SET_GPR_U32(ctx, 31, 0x1C4B48u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1C4B48u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C4B48u) { return; }
    ctx->pc = 0x1C4B48u;
label_1c4b48:
    // 0x1c4b48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c4b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b50: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c4b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4b54: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1C4B54u;
    SET_GPR_U32(ctx, 31, 0x1C4B5Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1C4B5Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C4B5Cu) { return; }
    ctx->pc = 0x1C4B5Cu;
label_1c4b5c:
    // 0x1c4b5c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c4b60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4b64: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b68: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c4b68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c4b6c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c4b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c4b74: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c4b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b78: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1C4B78u;
    SET_GPR_U32(ctx, 31, 0x1C4B80u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1C4B80u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C4B80u) { return; }
    ctx->pc = 0x1C4B80u;
label_1c4b80:
    // 0x1c4b80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4b88: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b8c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C4B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B94u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C4B8Cu, 0x1C4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B94u;
label_1c4b94:
    // 0x1c4b94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c4b9c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c4ba0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c4ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c4ba4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c4ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c4ba8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1C4BA8u;
    SET_GPR_U32(ctx, 31, 0x1C4BB0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1C4BA8u, 0x1C4BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BB0u;
}
