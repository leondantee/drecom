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

// Function: R501_player_light
// Address: 0x31e340 - 0x31e3e8
void R501_player_light_0x31e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R501_player_light_0x31e340");
#endif

    switch (ctx->pc) {
        case 0x31e370u: goto label_31e370;
        case 0x31e3a0u: goto label_31e3a0;
        case 0x31e3a8u: goto label_31e3a8;
        case 0x31e3bcu: goto label_31e3bc;
        case 0x31e3d4u: goto label_31e3d4;
        case 0x31e3e0u: goto label_31e3e0;
        default: break;
    }

    ctx->pc = 0x31e340u;

    // 0x31e340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e344: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31e348: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31e348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31e34c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31e34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31e350: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31e350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31e354: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e358: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31e35c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31e35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31e360: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x31e360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x31e364: 0xc42f9d78  lwc1        $f15, -0x6288($at)
    ctx->pc = 0x31e364u;
    { uint32_t bits = FAST_READ32(0x399D78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x31e368: 0xc0c7924  jal         func_31E490
    ctx->pc = 0x31E368u;
    SET_GPR_U32(ctx, 31, 0x31E370u);
    ctx->pc = 0x31E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E490u, 0x31E368u, 0x31E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E370u;
label_31e370:
    // 0x31e370: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e374: 0xac22af50  sw          $v0, -0x50B0($at)
    ctx->pc = 0x31e374u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF50u, _value); } while (0);
    // 0x31e378: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31e378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31e37c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31e37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31e380: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31e384: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31e384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31e388: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x31e388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x31e38c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e390: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x31e390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x31e394: 0xc42f9d80  lwc1        $f15, -0x6280($at)
    ctx->pc = 0x31e394u;
    { uint32_t bits = FAST_READ32(0x399D80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x31e398: 0xc0c7924  jal         func_31E490
    ctx->pc = 0x31E398u;
    SET_GPR_U32(ctx, 31, 0x31E3A0u);
    ctx->pc = 0x31E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E490u, 0x31E398u, 0x31E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3A0u;
label_31e3a0:
    // 0x31e3a0: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e3a4: 0xac22af58  sw          $v0, -0x50A8($at)
    ctx->pc = 0x31e3a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF58u, _value); } while (0);
label_31e3a8:
    // 0x31e3a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31e3a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e3ac: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e3b0: 0x8c24af50  lw          $a0, -0x50B0($at)
    ctx->pc = 0x31e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF50u));
    // 0x31e3b4: 0xc0c78fc  jal         func_31E3F0
    ctx->pc = 0x31E3B4u;
    SET_GPR_U32(ctx, 31, 0x31E3BCu);
    ctx->pc = 0x31E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3F0u, 0x31E3B4u, 0x31E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3BCu;
label_31e3bc:
    // 0x31e3bc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e3c0: 0x8c24af58  lw          $a0, -0x50A8($at)
    ctx->pc = 0x31e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF58u));
    // 0x31e3c4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x31e3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x31e3c8: 0xc42c9d70  lwc1        $f12, -0x6290($at)
    ctx->pc = 0x31e3c8u;
    { uint32_t bits = FAST_READ32(0x399D70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31e3cc: 0xc0c78fc  jal         func_31E3F0
    ctx->pc = 0x31E3CCu;
    SET_GPR_U32(ctx, 31, 0x31E3D4u);
    ctx->pc = 0x31E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3F0u, 0x31E3CCu, 0x31E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3D4u;
label_31e3d4:
    // 0x31e3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31e3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e3d8: 0xc084964  jal         func_212590
    ctx->pc = 0x31E3D8u;
    SET_GPR_U32(ctx, 31, 0x31E3E0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31E3D8u, 0x31E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3E0u;
label_31e3e0:
    // 0x31e3e0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x31E3E0u;
    {
        const bool branch_taken_0x31e3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e3e0) {
            ctx->pc = 0x31E3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e3a8;
        }
    }
    ctx->pc = 0x31E3E8u;
}
