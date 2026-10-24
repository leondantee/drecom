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

// Function: entry_0020f864
// Address: 0x20f864 - 0x20f9b8
void entry_0020f864_0x20f864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f864_0x20f864");
#endif

    switch (ctx->pc) {
        case 0x20f930u: goto label_20f930;
        default: break;
    }

    ctx->pc = 0x20f864u;

    // 0x20f864: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f868: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x20f868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20f86c: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x20f86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x20f870: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20f870u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20f874: 0x28a102ab  slti        $at, $a1, 0x2AB
    ctx->pc = 0x20f874u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)683) ? 1 : 0);
    // 0x20f878: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x20F878u;
    {
        const bool branch_taken_0x20f878 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f878) {
            ctx->pc = 0x20F9B8u;
            return;
        }
    }
    ctx->pc = 0x20F880u;
    // 0x20f880: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f884: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x20f884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20f888: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x20f888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20f88c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20f88cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20f890: 0x286102b0  slti        $at, $v1, 0x2B0
    ctx->pc = 0x20f890u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)688) ? 1 : 0);
    // 0x20f894: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x20F894u;
    {
        const bool branch_taken_0x20f894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f894) {
            ctx->pc = 0x20F9B8u;
            return;
        }
    }
    ctx->pc = 0x20F89Cu;
    // 0x20f89c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20f8a0: 0x24c6a3a0  addiu       $a2, $a2, -0x5C60
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943648));
    // 0x20f8a4: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x20f8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20f8a8: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x20f8a8u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x38A3A0u));
    // 0x20f8ac: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x20f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x20f8b0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x20f8b4: 0x2485a3b0  addiu       $a1, $a0, -0x5C50
    ctx->pc = 0x20f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943664));
    // 0x20f8b8: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x20f8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x20f8bc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x20f8bcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38A3B0u));
    // 0x20f8c0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x20f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x20f8c4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x20f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x20f8c8: 0x2486a3c0  addiu       $a2, $a0, -0x5C40
    ctx->pc = 0x20f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943680));
    // 0x20f8cc: 0x27a90160  addiu       $t1, $sp, 0x160
    ctx->pc = 0x20f8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20f8d0: 0x78ca0000  lq          $t2, 0x0($a2)
    ctx->pc = 0x20f8d0u;
    SET_GPR_VEC(ctx, 10, FAST_READ128(0x38A3C0u));
    // 0x20f8d4: 0x7d2a0000  sq          $t2, 0x0($t1)
    ctx->pc = 0x20f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 10));
    // 0x20f8d8: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x20f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x20f8dc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20f8dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f8e0: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x20f8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x20f8e4: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x20f8e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f8e8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20f8ec: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x20f8f0: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x20f8f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f8f4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f8f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x20f8f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20f8fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f900: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x20f900u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20f904: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x20f908: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x20f908u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20f90c: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20f90cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f910: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x20f910u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20f914: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x20f914u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f918: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x20f918u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x20f91c: 0x27a90150  addiu       $t1, $sp, 0x150
    ctx->pc = 0x20f91cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x20f920: 0x27aa0160  addiu       $t2, $sp, 0x160
    ctx->pc = 0x20f920u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x20f924: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f924u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f928: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20F928u;
    SET_GPR_U32(ctx, 31, 0x20F930u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F928u, 0x20F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F930u;
label_20f930:
    // 0x20f930: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x20f930u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20f934: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x20f934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x20f938: 0x2466a3d0  addiu       $a2, $v1, -0x5C30
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943696));
    // 0x20f93c: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x20f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20f940: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x20f940u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x38A3D0u));
    // 0x20f944: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x20f944u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x20f948: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x20f94c: 0x2543a3e0  addiu       $v1, $t2, -0x5C20
    ctx->pc = 0x20f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943712));
    // 0x20f950: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x20f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x20f954: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x20f954u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A3E0u));
    // 0x20f958: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20f958u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x20f95c: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20f960: 0x24c9a3f0  addiu       $t1, $a2, -0x5C10
    ctx->pc = 0x20f960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943728));
    // 0x20f964: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x20f964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20f968: 0x79260000  lq          $a2, 0x0($t1)
    ctx->pc = 0x20f968u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x38A3F0u));
    // 0x20f96c: 0x7d460000  sq          $a2, 0x0($t2)
    ctx->pc = 0x20f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 6));
    // 0x20f970: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x20f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x20f974: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x20f974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x20f978: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20f978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f97c: 0x3c094348  lui         $t1, 0x4348
    ctx->pc = 0x20f97cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17224 << 16));
    // 0x20f980: 0x44896800  mtc1        $t1, $f13
    ctx->pc = 0x20f980u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20f984: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x20f984u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
    // 0x20f988: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x20f988u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20f98c: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x20f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f990: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x20f990u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20f994: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f998: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x20f998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x20f99c: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x20f99cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f9a0: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x20f9a4: 0x27a90180  addiu       $t1, $sp, 0x180
    ctx->pc = 0x20f9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x20f9a8: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x20f9ac: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20f9acu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20f9b0: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20F9B0u;
    SET_GPR_U32(ctx, 31, 0x20F9B8u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20F9B0u, 0x20F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9B8u;
}
