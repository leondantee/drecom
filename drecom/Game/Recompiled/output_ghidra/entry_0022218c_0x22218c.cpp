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

// Function: entry_0022218c
// Address: 0x22218c - 0x22235c
void entry_0022218c_0x22218c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022218c_0x22218c");
#endif

    switch (ctx->pc) {
        case 0x22226cu: goto label_22226c;
        case 0x222278u: goto label_222278;
        case 0x2222b4u: goto label_2222b4;
        case 0x2222c0u: goto label_2222c0;
        case 0x222300u: goto label_222300;
        case 0x22230cu: goto label_22230c;
        case 0x222344u: goto label_222344;
        case 0x222350u: goto label_222350;
        default: break;
    }

    ctx->pc = 0x22218cu;

    // 0x22218c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222190: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x222190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x222194: 0x90830073  lbu         $v1, 0x73($a0)
    ctx->pc = 0x222194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 115)));
    // 0x222198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22219c: 0xa0830073  sb          $v1, 0x73($a0)
    ctx->pc = 0x22219cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x2221a0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2221a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2221a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2221a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2221a8: 0x90630073  lbu         $v1, 0x73($v1)
    ctx->pc = 0x2221a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x2221ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2221acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2221b0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2221b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2221b4: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x2221B4u;
    {
        const bool branch_taken_0x2221b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2221b4) {
            ctx->pc = 0x2224A8u;
            return;
        }
    }
    ctx->pc = 0x2221BCu;
    // 0x2221bc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2221bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2221c0: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2221c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2221c4: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2221c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2221c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2221c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2221cc: 0x44000b6  bltz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2221CCu;
    {
        const bool branch_taken_0x2221cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2221cc) {
            ctx->pc = 0x2224A8u;
            return;
        }
    }
    ctx->pc = 0x2221D4u;
    // 0x2221d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2221d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2221d8: 0x0  nop
    ctx->pc = 0x2221d8u;
    // NOP
    // 0x2221dc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2221dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2221e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2221e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2221e4: 0x0  nop
    ctx->pc = 0x2221e4u;
    // NOP
    // 0x2221e8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2221e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2221ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2221ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2221f0: 0x0  nop
    ctx->pc = 0x2221f0u;
    // NOP
    // 0x2221f4: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2221f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2221f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2221f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2221fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2221fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x222200: 0x0  nop
    ctx->pc = 0x222200u;
    // NOP
    // 0x222204: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x222204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x222208: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22220c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x222210: 0x945e00aa  lhu         $fp, 0xAA($v0)
    ctx->pc = 0x222210u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x222214: 0x33c3ffff  andi        $v1, $fp, 0xFFFF
    ctx->pc = 0x222214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x222218: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x222218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x22221c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x22221Cu;
    {
        const bool branch_taken_0x22221c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22221c) {
            ctx->pc = 0x22235Cu;
            return;
        }
    }
    ctx->pc = 0x222224u;
    // 0x222224: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x222228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x222228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22222c: 0x0  nop
    ctx->pc = 0x22222cu;
    // NOP
    // 0x222230: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x222230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x222234: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222238: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x222238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x22223c: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x22223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x222240: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x222240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222244: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x222244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x222248: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x222248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22224c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x22224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x222250: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x222254: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x222254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x222258: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x22225c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x22225cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222260: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x222264: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x222264u;
    SET_GPR_U32(ctx, 31, 0x22226Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x222264u, 0x22226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22226Cu;
label_22226c:
    // 0x22226c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22226cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222270: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x222270u;
    SET_GPR_U32(ctx, 31, 0x222278u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222270u, 0x222278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222278u;
label_222278:
    // 0x222278: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x222278u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22227c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x22227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222280: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x222280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x222284: 0x24620280  addiu       $v0, $v1, 0x280
    ctx->pc = 0x222284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x222288: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x222288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22228c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x22228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x222290: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x222290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222294: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x222294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x222298: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x222298u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x22229c: 0x463824  and         $a3, $v0, $a2
    ctx->pc = 0x22229cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2222a0: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x2222a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x2222a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2222a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2222a8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2222a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2222ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2222ACu;
    SET_GPR_U32(ctx, 31, 0x2222B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2222ACu, 0x2222B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222B4u;
label_2222b4:
    // 0x2222b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2222b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2222b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2222B8u;
    SET_GPR_U32(ctx, 31, 0x2222C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2222B8u, 0x2222C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2222C0u;
label_2222c0:
    // 0x2222c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2222c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2222c4: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x2222c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2222c8: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2222c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2222cc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2222ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2222d0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2222d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2222d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2222d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2222d8: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2222d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x2222dc: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x2222dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2222e0: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x2222e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x2222e4: 0x24080e13  addiu       $t0, $zero, 0xE13
    ctx->pc = 0x2222e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x2222e8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2222e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2222ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2222ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2222f0: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2222f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2222f4: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2222f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2222f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2222F8u;
    SET_GPR_U32(ctx, 31, 0x222300u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2222F8u, 0x222300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222300u;
label_222300:
    // 0x222300: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222300u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222304: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x222304u;
    SET_GPR_U32(ctx, 31, 0x22230Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222304u, 0x22230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22230Cu;
label_22230c:
    // 0x22230c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222310: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x222310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x222314: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x222314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x222318: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x222318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22231c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x222320: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x222320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x222324: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x222324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x222328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x222328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22232c: 0x2023824  and         $a3, $s0, $v0
    ctx->pc = 0x22232cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x222330: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x222330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x222334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x222334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x222338: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22233c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x22233Cu;
    SET_GPR_U32(ctx, 31, 0x222344u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x22233Cu, 0x222344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222344u;
label_222344:
    // 0x222344: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222344u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222348: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x222348u;
    SET_GPR_U32(ctx, 31, 0x222350u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x222348u, 0x222350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222350u;
label_222350:
    // 0x222350: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x222350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x222354: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222354) {
            ctx->pc = 0x2223E4u;
            return;
        }
    }
    ctx->pc = 0x22235Cu;
}
