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

// Function: entry_0031d8d4
// Address: 0x31d8d4 - 0x31daa4
void entry_0031d8d4_0x31d8d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d8d4_0x31d8d4");
#endif

    switch (ctx->pc) {
        case 0x31d904u: goto label_31d904;
        case 0x31d928u: goto label_31d928;
        case 0x31d9b8u: goto label_31d9b8;
        case 0x31d9c0u: goto label_31d9c0;
        case 0x31d9dcu: goto label_31d9dc;
        case 0x31d9f8u: goto label_31d9f8;
        case 0x31da28u: goto label_31da28;
        case 0x31da3cu: goto label_31da3c;
        case 0x31da50u: goto label_31da50;
        case 0x31da64u: goto label_31da64;
        case 0x31da78u: goto label_31da78;
        default: break;
    }

    ctx->pc = 0x31d8d4u;

    // 0x31d8d4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d8d8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31d8dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31d8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d8e0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x31d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31d8e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31d8e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31d8ec: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31d8f0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31d8f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31d8f8: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x31d8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31d8fc: 0xc040c80  jal         func_103200
    ctx->pc = 0x31D8FCu;
    SET_GPR_U32(ctx, 31, 0x31D904u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31D904u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31D904u) { return; }
    ctx->pc = 0x31D904u;
label_31d904:
    // 0x31d904: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x31d904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d908: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x31d908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d90c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x31d90cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d910: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x31d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d914: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x31d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d918: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d91c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x31d91cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31d920: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x31D920u;
    SET_GPR_U32(ctx, 31, 0x31D928u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x31D920u, 0x31D928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D928u;
label_31d928:
    // 0x31d928: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x31d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x31d92c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d930: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x31d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x31d934: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x31d934u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31d938: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x31D938u;
    {
        const bool branch_taken_0x31d938 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d938) {
            ctx->pc = 0x31DAA4u;
            return;
        }
    }
    ctx->pc = 0x31D940u;
    // 0x31d940: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d944: 0x8c43129c  lw          $v1, 0x129C($v0)
    ctx->pc = 0x31d944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4764)));
    // 0x31d948: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x31d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x31d94c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x31d94cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x31d950: 0x0  nop
    ctx->pc = 0x31d950u;
    // NOP
    // 0x31d954: 0x0  nop
    ctx->pc = 0x31d954u;
    // NOP
    // 0x31d958: 0x1010  mfhi        $v0
    ctx->pc = 0x31d958u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31d95c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x31D95Cu;
    {
        const bool branch_taken_0x31d95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d95c) {
            ctx->pc = 0x31DBB0u;
            return;
        }
    }
    ctx->pc = 0x31D964u;
    // 0x31d964: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31d964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31d968: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x31d968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x31d96c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31d970: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31d970u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d974: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31d978: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31d978u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31d97c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31d980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31d984: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31d984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x31d988: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31d988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31d98c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x31d98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31d990: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31d990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31d994: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x31d998: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x31d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x31d99c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x31d99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x31d9a0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x31d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31d9a4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31d9a8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x31d9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x31d9ac: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x31d9b0: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x31D9B0u;
    SET_GPR_U32(ctx, 31, 0x31D9B8u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x31D9B0u, 0x31D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9B8u;
label_31d9b8:
    // 0x31d9b8: 0xc067654  jal         func_19D950
    ctx->pc = 0x31D9B8u;
    SET_GPR_U32(ctx, 31, 0x31D9C0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x31D9B8u, 0x31D9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9C0u;
label_31d9c0:
    // 0x31d9c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31d9c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9c8: 0x0  nop
    ctx->pc = 0x31d9c8u;
    // NOP
    // 0x31d9cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d9d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31d9d4: 0xc067654  jal         func_19D950
    ctx->pc = 0x31D9D4u;
    SET_GPR_U32(ctx, 31, 0x31D9DCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x31D9D4u, 0x31D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9DCu;
label_31d9dc:
    // 0x31d9dc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31d9e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d9e4: 0x0  nop
    ctx->pc = 0x31d9e4u;
    // NOP
    // 0x31d9e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31d9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31d9ec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31d9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31d9f0: 0xc067648  jal         func_19D920
    ctx->pc = 0x31D9F0u;
    SET_GPR_U32(ctx, 31, 0x31D9F8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x31D9F0u, 0x31D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9F8u;
label_31d9f8:
    // 0x31d9f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x31d9fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31da00: 0x0  nop
    ctx->pc = 0x31da00u;
    // NOP
    // 0x31da04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31da04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31da08: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x31da08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31da0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31da10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31da10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31da14: 0x0  nop
    ctx->pc = 0x31da14u;
    // NOP
    // 0x31da18: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x31da18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x31da1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31da1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31da20: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x31DA20u;
    SET_GPR_U32(ctx, 31, 0x31DA28u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x31DA28u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA28u) { return; }
    ctx->pc = 0x31DA28u;
label_31da28:
    // 0x31da28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31da30: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x31da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31da34: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x31DA34u;
    SET_GPR_U32(ctx, 31, 0x31DA3Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x31DA3Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA3Cu) { return; }
    ctx->pc = 0x31DA3Cu;
label_31da3c:
    // 0x31da3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x31da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31da40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x31da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31da44: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x31da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31da48: 0xc040d0e  jal         func_103438
    ctx->pc = 0x31DA48u;
    SET_GPR_U32(ctx, 31, 0x31DA50u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x31DA50u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA50u) { return; }
    ctx->pc = 0x31DA50u;
label_31da50:
    // 0x31da50: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x31da50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31da54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da58: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x31da5c: 0xc040c00  jal         func_103000
    ctx->pc = 0x31DA5Cu;
    SET_GPR_U32(ctx, 31, 0x31DA64u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x31DA64u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA64u) { return; }
    ctx->pc = 0x31DA64u;
label_31da64:
    // 0x31da64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31da68: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x31da68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31da6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x31da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31da70: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31DA70u;
    SET_GPR_U32(ctx, 31, 0x31DA78u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31DA78u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31DA78u) { return; }
    ctx->pc = 0x31DA78u;
label_31da78:
    // 0x31da78: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x31da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31da7c: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x31da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x31da80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31da84: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x31da84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x31da88: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x31da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31da8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31da8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31da90: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x31da90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x31da94: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x31da94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x31da98: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31da98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31da9c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x31DA9Cu;
    {
        const bool branch_taken_0x31da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da9c) {
            ctx->pc = 0x31DBB0u;
            return;
        }
    }
    ctx->pc = 0x31DAA4u;
}
