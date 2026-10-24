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

// Function: entry_002e133c
// Address: 0x2e133c - 0x2e13f8
void entry_002e133c_0x2e133c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e133c_0x2e133c");
#endif

    switch (ctx->pc) {
        case 0x2e1344u: goto label_2e1344;
        case 0x2e1360u: goto label_2e1360;
        case 0x2e137cu: goto label_2e137c;
        case 0x2e13b8u: goto label_2e13b8;
        case 0x2e13f4u: goto label_2e13f4;
        default: break;
    }

    ctx->pc = 0x2e133cu;

    // 0x2e133c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E133Cu;
    SET_GPR_U32(ctx, 31, 0x2E1344u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E133Cu, 0x2E1344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1344u;
label_2e1344:
    // 0x2e1344: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e1344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e1348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e134c: 0x0  nop
    ctx->pc = 0x2e134cu;
    // NOP
    // 0x2e1350: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e1350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e1354: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e1354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e1358: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E1358u;
    SET_GPR_U32(ctx, 31, 0x2E1360u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E1358u, 0x2E1360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1360u;
label_2e1360:
    // 0x2e1360: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e1360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e1364: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1368: 0x0  nop
    ctx->pc = 0x2e1368u;
    // NOP
    // 0x2e136c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e136cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e1370: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2e1370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e1374: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E1374u;
    SET_GPR_U32(ctx, 31, 0x2E137Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E1374u, 0x2E137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E137Cu;
label_2e137c:
    // 0x2e137c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2e137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2e1380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1384: 0x0  nop
    ctx->pc = 0x2e1384u;
    // NOP
    // 0x2e1388: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e1388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e138c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2e138cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e1390: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e1390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e1394: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e1394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e1398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e139c: 0x0  nop
    ctx->pc = 0x2e139cu;
    // NOP
    // 0x2e13a0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2e13a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2e13a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e13a8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2e13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e13ac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e13acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e13b0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2E13B0u;
    SET_GPR_U32(ctx, 31, 0x2E13B8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2E13B0u, 0x2E13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13B8u;
label_2e13b8:
    // 0x2e13b8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e13bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e13bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e13c0: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2e13c4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e13c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e13c8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e13cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e13ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e13d0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2e13d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2e13d4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e13d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e13d8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2e13d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e13dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e13dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e13e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2e13e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e13e4: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2e13e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e13e8: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2e13ec: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x2E13ECu;
    SET_GPR_U32(ctx, 31, 0x2E13F4u);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x2E13ECu, 0x2E13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13F4u;
label_2e13f4:
    // 0x2e13f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e13f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2e13f8u;
}
