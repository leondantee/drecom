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

// Function: entry_001bb2c4
// Address: 0x1bb2c4 - 0x1bb370
void entry_001bb2c4_0x1bb2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb2c4_0x1bb2c4");
#endif

    switch (ctx->pc) {
        case 0x1bb2e8u: goto label_1bb2e8;
        case 0x1bb2f4u: goto label_1bb2f4;
        default: break;
    }

    ctx->pc = 0x1bb2c4u;

    // 0x1bb2c4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb2c8: 0xc4811280  lwc1        $f1, 0x1280($a0)
    ctx->pc = 0x1bb2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb2cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb2d0: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb2d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb2d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bb2d8: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1bb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1bb2dc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb2dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb2e0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BB2E0u;
    SET_GPR_U32(ctx, 31, 0x1BB2E8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB2E0u, 0x1BB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2E8u;
label_1bb2e8:
    // 0x1bb2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb2ec: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BB2ECu;
    SET_GPR_U32(ctx, 31, 0x1BB2F4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BB2ECu, 0x1BB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2F4u;
label_1bb2f4:
    // 0x1bb2f4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bb2f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bb2f8: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BB2F8u;
    {
        const bool branch_taken_0x1bb2f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb2f8) {
            ctx->pc = 0x1BB384u;
            return;
        }
    }
    ctx->pc = 0x1BB300u;
    // 0x1bb300: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb304: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1bb304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bb308: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bb308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bb30c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bb30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1bb310: 0x106001ff  beqz        $v1, . + 4 + (0x1FF << 2)
    ctx->pc = 0x1BB310u;
    {
        const bool branch_taken_0x1bb310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb310) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB318u;
    // 0x1bb318: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb31c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bb31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bb320: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x1bb320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x1bb324: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1bb324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1bb328: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1bb328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1bb32c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bb32cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bb330: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb334: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bb334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1bb338: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bb338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bb33c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb340: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB340u;
    {
        const bool branch_taken_0x1bb340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb340) {
            ctx->pc = 0x1BB370u;
            return;
        }
    }
    ctx->pc = 0x1BB348u;
    // 0x1bb348: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb34c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB34Cu;
    {
        const bool branch_taken_0x1bb34c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bb34c) {
            ctx->pc = 0x1BB370u;
            return;
        }
    }
    ctx->pc = 0x1BB354u;
    // 0x1bb354: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb358: 0x10a301ed  beq         $a1, $v1, . + 4 + (0x1ED << 2)
    ctx->pc = 0x1BB358u;
    {
        const bool branch_taken_0x1bb358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb358) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB360u;
    // 0x1bb360: 0x10a001eb  beqz        $a1, . + 4 + (0x1EB << 2)
    ctx->pc = 0x1BB360u;
    {
        const bool branch_taken_0x1bb360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb360) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB368u;
    // 0x1bb368: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x1BB368u;
    {
        const bool branch_taken_0x1bb368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb368) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB370u;
}
