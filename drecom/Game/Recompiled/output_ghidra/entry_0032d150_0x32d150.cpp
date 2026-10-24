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

// Function: entry_0032d150
// Address: 0x32d150 - 0x32d218
void entry_0032d150_0x32d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d150_0x32d150");
#endif

    switch (ctx->pc) {
        case 0x32d174u: goto label_32d174;
        case 0x32d18cu: goto label_32d18c;
        case 0x32d1dcu: goto label_32d1dc;
        case 0x32d1e8u: goto label_32d1e8;
        default: break;
    }

    ctx->pc = 0x32d150u;

    // 0x32d150: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x32d150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d154: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x32d154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x32d158: 0x24a2a5e0  addiu       $v0, $a1, -0x5A20
    ctx->pc = 0x32d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944224));
    // 0x32d15c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d15cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d160: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32d160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32d164: 0x2446a5f0  addiu       $a2, $v0, -0x5A10
    ctx->pc = 0x32d164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944240));
    // 0x32d168: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d16c: 0xc040ecc  jal         func_103B30
    ctx->pc = 0x32D16Cu;
    SET_GPR_U32(ctx, 31, 0x32D174u);
    ctx->pc = 0x103B30u;
    {
        ctx->pc = 0x32D174u;
        ps2_stubs::sceVu0InterVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D174u) { return; }
    ctx->pc = 0x32D174u;
label_32d174:
    // 0x32d174: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x32d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x32d178: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d17c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x32d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x32d180: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x32d180u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d184: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x32D184u;
    SET_GPR_U32(ctx, 31, 0x32D18Cu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x32D18Cu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32D18Cu) { return; }
    ctx->pc = 0x32D18Cu;
label_32d18c:
    // 0x32d18c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32d18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32d190: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x32d190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32d194: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x32d194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x32d198: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32d19c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x32D19Cu;
    {
        const bool branch_taken_0x32d19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d19c) {
            ctx->pc = 0x32D218u;
            return;
        }
    }
    ctx->pc = 0x32D1A4u;
    // 0x32d1a4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32d1a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32d1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32d1ac: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32d1b0: 0x34420203  ori         $v0, $v0, 0x203
    ctx->pc = 0x32d1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x32d1b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32d1b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32d1b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d1bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32d1c0: 0x24451f10  addiu       $a1, $v0, 0x1F10
    ctx->pc = 0x32d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7952));
    // 0x32d1c4: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x32d1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32d1c8: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x32d1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32d1cc: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x32d1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32d1d0: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x32d1d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32d1d4: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32D1D4u;
    SET_GPR_U32(ctx, 31, 0x32D1DCu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32D1D4u, 0x32D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1DCu;
label_32d1dc:
    // 0x32d1dc: 0xc7ac00d4  lwc1        $f12, 0xD4($sp)
    ctx->pc = 0x32d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32d1e0: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x32D1E0u;
    SET_GPR_U32(ctx, 31, 0x32D1E8u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x32D1E0u, 0x32D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D1E8u;
label_32d1e8:
    // 0x32d1e8: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x32d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32d1ec: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x32d1ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32d1f0: 0x3c031d04  lui         $v1, 0x1D04
    ctx->pc = 0x32d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7428 << 16));
    // 0x32d1f4: 0x34661e02  ori         $a2, $v1, 0x1E02
    ctx->pc = 0x32d1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7682);
    // 0x32d1f8: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x32d1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32d1fc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32d1fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d200: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x32d200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x32d204: 0x24631f38  addiu       $v1, $v1, 0x1F38
    ctx->pc = 0x32d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7992));
    // 0x32d208: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x32d208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32d20c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x32d20cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32d210: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32D210u;
    SET_GPR_U32(ctx, 31, 0x32D218u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32D210u, 0x32D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D218u;
}
