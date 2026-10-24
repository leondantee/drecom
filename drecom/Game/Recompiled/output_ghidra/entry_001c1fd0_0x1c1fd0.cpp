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

// Function: entry_001c1fd0
// Address: 0x1c1fd0 - 0x1c20a0
void entry_001c1fd0_0x1c1fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1fd0_0x1c1fd0");
#endif

    switch (ctx->pc) {
        case 0x1c2008u: goto label_1c2008;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2084u: goto label_1c2084;
        default: break;
    }

    ctx->pc = 0x1c1fd0u;

    // 0x1c1fd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fd4: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1fd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fdc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c1fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c1fe0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1fe4: 0x904209e6  lbu         $v0, 0x9E6($v0)
    ctx->pc = 0x1c1fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2534)));
    // 0x1c1fe8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C1FE8u;
    {
        const bool branch_taken_0x1c1fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1fe8) {
            ctx->pc = 0x1C20A0u;
            return;
        }
    }
    ctx->pc = 0x1C1FF0u;
    // 0x1c1ff0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1ff4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c1ff8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1c1ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c1ffc: 0xc44d137c  lwc1        $f13, 0x137C($v0)
    ctx->pc = 0x1c1ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c2000: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C2000u;
    SET_GPR_U32(ctx, 31, 0x1C2008u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C2000u, 0x1C2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2008u;
label_1c2008:
    // 0x1c2008: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c2008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c200c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2010: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1c2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1c2014: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c2014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c201c: 0x246506f0  addiu       $a1, $v1, 0x6F0
    ctx->pc = 0x1c201cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1776));
    // 0x1c2020: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c2024: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C2024u;
    SET_GPR_U32(ctx, 31, 0x1C202Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C2024u, 0x1C202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C202Cu;
label_1c202c:
    // 0x1c202c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2030: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1C2030u;
    SET_GPR_U32(ctx, 31, 0x1C2038u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1C2038u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C2038u) { return; }
    ctx->pc = 0x1C2038u;
label_1c2038:
    // 0x1c2038: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c203c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c203cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2040: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x1c2040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2044: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1C2044u;
    SET_GPR_U32(ctx, 31, 0x1C204Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1C204Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C204Cu) { return; }
    ctx->pc = 0x1C204Cu;
label_1c204c:
    // 0x1c204c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1c204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2050: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1c2050u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2054: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c2058: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c2058u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c205c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c205cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c2060: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c2060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2064: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c2064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c2068: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1C2068u;
    SET_GPR_U32(ctx, 31, 0x1C2070u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1C2070u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1C2070u) { return; }
    ctx->pc = 0x1C2070u;
label_1c2070:
    // 0x1c2070: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c2070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2074: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2078: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c207c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C207Cu;
    SET_GPR_U32(ctx, 31, 0x1C2084u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C207Cu, 0x1C2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2084u;
label_1c2084:
    // 0x1c2084: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2088: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c208c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c2090: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1c2094: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1c2094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2098: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1C2098u;
    SET_GPR_U32(ctx, 31, 0x1C20A0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1C2098u, 0x1C20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20A0u;
}
