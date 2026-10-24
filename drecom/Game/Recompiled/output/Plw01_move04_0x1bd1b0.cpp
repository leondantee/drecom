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

// Function: Plw01_move04
// Address: 0x1bd1b0 - 0x1bd478
void Plw01_move04_0x1bd1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move04_0x1bd1b0");
#endif

    switch (ctx->pc) {
        case 0x1bd248u: goto label_1bd248;
        case 0x1bd260u: goto label_1bd260;
        case 0x1bd270u: goto label_1bd270;
        case 0x1bd290u: goto label_1bd290;
        case 0x1bd2b4u: goto label_1bd2b4;
        case 0x1bd2d0u: goto label_1bd2d0;
        case 0x1bd2e4u: goto label_1bd2e4;
        case 0x1bd2f0u: goto label_1bd2f0;
        case 0x1bd310u: goto label_1bd310;
        case 0x1bd45cu: goto label_1bd45c;
        default: break;
    }

    ctx->pc = 0x1bd1b0u;

    // 0x1bd1b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd1b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bd1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bd1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd1bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bd1c0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bd1c4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bd1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bd1c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bd1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bd1cc: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bd1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bd1d0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bd1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bd1d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bd1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bd1d8: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bd1d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bd1dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bd1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd1e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bd1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bd1e4: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1bd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
    // 0x1bd1e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bd1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bd1ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd1f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bd1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bd1f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd1f8: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bd1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd1fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd204: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BD204u;
    {
        const bool branch_taken_0x1bd204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd204) {
            ctx->pc = 0x1BD280u;
            goto label_1bd280;
        }
    }
    ctx->pc = 0x1BD20Cu;
    // 0x1bd20c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD20Cu;
    {
        const bool branch_taken_0x1bd20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd20c) {
            ctx->pc = 0x1BD21Cu;
            goto label_1bd21c;
        }
    }
    ctx->pc = 0x1BD214u;
    // 0x1bd214: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1BD214u;
    {
        const bool branch_taken_0x1bd214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd214) {
            ctx->pc = 0x1BD464u;
            goto label_1bd464;
        }
    }
    ctx->pc = 0x1BD21Cu;
label_1bd21c:
    // 0x1bd21c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bd220: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd224: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bd224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd228: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd22c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd230: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bd230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bd234: 0x24060a49  addiu       $a2, $zero, 0xA49
    ctx->pc = 0x1bd234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2633));
    // 0x1bd238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bd238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd23c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bd240: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BD240u;
    SET_GPR_U32(ctx, 31, 0x1BD248u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BD240u, 0x1BD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD248u;
label_1bd248:
    // 0x1bd248: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd24c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd250: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bd250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd254: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd258: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BD258u;
    SET_GPR_U32(ctx, 31, 0x1BD260u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BD258u, 0x1BD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD260u;
label_1bd260:
    // 0x1bd260: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bd260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bd264: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd268: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BD268u;
    SET_GPR_U32(ctx, 31, 0x1BD270u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BD268u, 0x1BD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD270u;
label_1bd270:
    // 0x1bd270: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd274: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bd274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd278: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd27c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bd27cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bd280:
    // 0x1bd280: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd284: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bd284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd288: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BD288u;
    SET_GPR_U32(ctx, 31, 0x1BD290u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BD288u, 0x1BD290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD290u;
label_1bd290:
    // 0x1bd290: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd294: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd298: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1bd298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1bd29c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bd2a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1bd2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bd2a4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1bd2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd2a8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1bd2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd2ac: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BD2ACu;
    SET_GPR_U32(ctx, 31, 0x1BD2B4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BD2ACu, 0x1BD2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2B4u;
label_1bd2b4:
    // 0x1bd2b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd2b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bd2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bd2bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd2c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd2c4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bd2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd2c8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BD2C8u;
    SET_GPR_U32(ctx, 31, 0x1BD2D0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BD2C8u, 0x1BD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2D0u;
label_1bd2d0:
    // 0x1bd2d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bd2d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd2d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd2d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bd2d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd2dc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BD2DCu;
    SET_GPR_U32(ctx, 31, 0x1BD2E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BD2DCu, 0x1BD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2E4u;
label_1bd2e4:
    // 0x1bd2e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bd2e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd2e8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BD2E8u;
    SET_GPR_U32(ctx, 31, 0x1BD2F0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BD2E8u, 0x1BD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD2F0u;
label_1bd2f0:
    // 0x1bd2f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd2f4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bd2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1bd2f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd2fc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bd2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bd300: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD300u;
    {
        const bool branch_taken_0x1bd300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd300) {
            ctx->pc = 0x1BD328u;
            goto label_1bd328;
        }
    }
    ctx->pc = 0x1BD308u;
    // 0x1bd308: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BD308u;
    SET_GPR_U32(ctx, 31, 0x1BD310u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BD308u, 0x1BD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD310u;
label_1bd310:
    // 0x1bd310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD310u;
    {
        const bool branch_taken_0x1bd310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd310) {
            ctx->pc = 0x1BD328u;
            goto label_1bd328;
        }
    }
    ctx->pc = 0x1BD318u;
    // 0x1bd318: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd31c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd31cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd320: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1BD320u;
    {
        const bool branch_taken_0x1bd320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd320) {
            ctx->pc = 0x1BD464u;
            goto label_1bd464;
        }
    }
    ctx->pc = 0x1BD328u;
label_1bd328:
    // 0x1bd328: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd32c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bd32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bd330: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1BD330u;
    {
        const bool branch_taken_0x1bd330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd330) {
            ctx->pc = 0x1BD464u;
            goto label_1bd464;
        }
    }
    ctx->pc = 0x1BD338u;
    // 0x1bd338: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd33c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bd33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd340: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bd340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bd344: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd348: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD348u;
    {
        const bool branch_taken_0x1bd348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd348) {
            ctx->pc = 0x1BD3DCu;
            goto label_1bd3dc;
        }
    }
    ctx->pc = 0x1BD350u;
    // 0x1bd350: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd354: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd358: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd35c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd360: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd364: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1bd364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd368: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd36c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd370: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd374: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd378: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd37c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bd37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bd380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd384: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd388: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1bd388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd38c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd390: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd398: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1bd398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1bd39c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd3a4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD3A4u;
    {
        const bool branch_taken_0x1bd3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd3a4) {
            ctx->pc = 0x1BD3B8u;
            goto label_1bd3b8;
        }
    }
    ctx->pc = 0x1BD3ACu;
    // 0x1bd3ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd3b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3b4: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bd3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
label_1bd3b8:
    // 0x1bd3b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bd3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd3bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3c0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bd3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bd3c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3c8: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1bd3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd3cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3d0: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1bd3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd3d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD3D4u;
    {
        const bool branch_taken_0x1bd3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd3d4) {
            ctx->pc = 0x1BD40Cu;
            goto label_1bd40c;
        }
    }
    ctx->pc = 0x1BD3DCu;
label_1bd3dc:
    // 0x1bd3dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd3e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd3e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bd3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd3f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd3f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd400: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bd400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bd404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd408: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1bd40c:
    // 0x1bd40c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd410: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd414: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1bd414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1bd418: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd41c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bd41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd424: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1bd428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd42c: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd434: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1bd434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1bd438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd43c: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1bd43cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd444: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bd448: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD448u;
    {
        const bool branch_taken_0x1bd448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd448) {
            ctx->pc = 0x1BD45Cu;
            goto label_1bd45c;
        }
    }
    ctx->pc = 0x1BD450u;
    // 0x1bd450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd454: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BD454u;
    SET_GPR_U32(ctx, 31, 0x1BD45Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BD454u, 0x1BD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD45Cu;
label_1bd45c:
    // 0x1bd45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd460: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1bd464:
    // 0x1bd464: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bd464u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd46c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd470: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD478u;
}
