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

// Function: entry_002351b4
// Address: 0x2351b4 - 0x235364
void entry_002351b4_0x2351b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002351b4_0x2351b4");
#endif

    switch (ctx->pc) {
        case 0x235288u: goto label_235288;
        case 0x235294u: goto label_235294;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d8u: goto label_2352d8;
        case 0x235310u: goto label_235310;
        case 0x23531cu: goto label_23531c;
        case 0x235358u: goto label_235358;
        default: break;
    }

    ctx->pc = 0x2351b4u;

    // 0x2351b4: 0x8fb20118  lw          $s2, 0x118($sp)
    ctx->pc = 0x2351b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2351b8: 0x26421330  addiu       $v0, $s2, 0x1330
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x2351bc: 0x90430073  lbu         $v1, 0x73($v0)
    ctx->pc = 0x2351bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 115)));
    // 0x2351c0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2351c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2351c4: 0xa0440073  sb          $a0, 0x73($v0)
    ctx->pc = 0x2351c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x2351c8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2351c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2351cc: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2351ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2351d0: 0x90420073  lbu         $v0, 0x73($v0)
    ctx->pc = 0x2351d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 115)));
    // 0x2351d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2351d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2351d8: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x2351d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2351dc: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2351DCu;
    {
        const bool branch_taken_0x2351dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2351dc) {
            ctx->pc = 0x235364u;
            return;
        }
    }
    ctx->pc = 0x2351E4u;
    // 0x2351e4: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2351e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2351e8: 0x84c210a6  lh          $v0, 0x10A6($a2)
    ctx->pc = 0x2351e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
    // 0x2351ec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2351f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2351f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2351f4: 0x460005b  bltz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2351F4u;
    {
        const bool branch_taken_0x2351f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2351f4) {
            ctx->pc = 0x235364u;
            return;
        }
    }
    ctx->pc = 0x2351FCu;
    // 0x2351fc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235200: 0x8c45121c  lw          $a1, 0x121C($v0)
    ctx->pc = 0x235200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4636)));
    // 0x235204: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x235204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x235208: 0xa23024  and         $a2, $a1, $v0
    ctx->pc = 0x235208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x23520c: 0x10c00055  beqz        $a2, . + 4 + (0x55 << 2)
    ctx->pc = 0x23520Cu;
    {
        const bool branch_taken_0x23520c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23520c) {
            ctx->pc = 0x235364u;
            return;
        }
    }
    ctx->pc = 0x235214u;
    // 0x235214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235218: 0x0  nop
    ctx->pc = 0x235218u;
    // NOP
    // 0x23521c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x23521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x235220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x235220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235224: 0x0  nop
    ctx->pc = 0x235224u;
    // NOP
    // 0x235228: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x235228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x23522c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23522cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235230: 0x0  nop
    ctx->pc = 0x235230u;
    // NOP
    // 0x235234: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x235234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x235238: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x235238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x23523c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23523cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235240: 0x0  nop
    ctx->pc = 0x235240u;
    // NOP
    // 0x235244: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x235244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x235248: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x23524c: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x23524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x235250: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x235254: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x235258: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x23525c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x235260: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x235264: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x235264u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x235268: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x23526c: 0x24080e13  addiu       $t0, $zero, 0xE13
    ctx->pc = 0x23526cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x235270: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x235270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x235274: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x235274u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x235278: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23527c: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x23527cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x235280: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x235280u;
    SET_GPR_U32(ctx, 31, 0x235288u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x235280u, 0x235288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235288u;
label_235288:
    // 0x235288: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23528c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x23528Cu;
    SET_GPR_U32(ctx, 31, 0x235294u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x23528Cu, 0x235294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235294u;
label_235294:
    // 0x235294: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x235294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235298: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x235298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23529c: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x23529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x2352a0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2352a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2352a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2352a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2352a8: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2352a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2352ac: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2352acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2352b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2352b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2352b4: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x2352b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2352b8: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x2352bc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2352bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2352c0: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2352c4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2352C4u;
    SET_GPR_U32(ctx, 31, 0x2352CCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2352C4u, 0x2352CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352CCu;
label_2352cc:
    // 0x2352cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2352ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2352d0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2352D0u;
    SET_GPR_U32(ctx, 31, 0x2352D8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2352D0u, 0x2352D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2352D8u;
label_2352d8:
    // 0x2352d8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x2352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2352dc: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2352dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2352e0: 0x24e80100  addiu       $t0, $a3, 0x100
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x2352e4: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x2352e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2352e8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x2352e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x2352ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2352ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2352f0: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x2352f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x2352f4: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2352f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2352f8: 0x1263824  and         $a3, $t1, $a2
    ctx->pc = 0x2352f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x2352fc: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x2352fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x235300: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x235300u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x235304: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x235308: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x235308u;
    SET_GPR_U32(ctx, 31, 0x235310u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x235308u, 0x235310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235310u;
label_235310:
    // 0x235310: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235310u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x235314: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x235314u;
    SET_GPR_U32(ctx, 31, 0x23531Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x235314u, 0x23531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23531Cu;
label_23531c:
    // 0x23531c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x235320: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x235320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x235324: 0x24c20280  addiu       $v0, $a2, 0x280
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
    // 0x235328: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x235328u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23532c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x23532cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x235330: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x235330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x235334: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x235334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x235338: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x235338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23533c: 0x2223824  and         $a3, $s1, $v0
    ctx->pc = 0x23533cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x235340: 0x24060e15  addiu       $a2, $zero, 0xE15
    ctx->pc = 0x235340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x235344: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x235344u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x235348: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x235348u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23534c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x23534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x235350: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x235350u;
    SET_GPR_U32(ctx, 31, 0x235358u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x235350u, 0x235358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235358u;
label_235358:
    // 0x235358: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x235358u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23535c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x23535Cu;
    SET_GPR_U32(ctx, 31, 0x235364u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x23535Cu, 0x235364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235364u;
}
