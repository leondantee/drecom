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

// Function: entry_002418dc
// Address: 0x2418dc - 0x241a78
void entry_002418dc_0x2418dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002418dc_0x2418dc");
#endif

    switch (ctx->pc) {
        case 0x241990u: goto label_241990;
        case 0x24199cu: goto label_24199c;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419e4u: goto label_2419e4;
        case 0x241a24u: goto label_241a24;
        case 0x241a30u: goto label_241a30;
        case 0x241a68u: goto label_241a68;
        case 0x241a74u: goto label_241a74;
        default: break;
    }

    ctx->pc = 0x2418dcu;

    // 0x2418dc: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2418dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2418e0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2418e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2418e4: 0x90620073  lbu         $v0, 0x73($v1)
    ctx->pc = 0x2418e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x2418e8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2418e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2418ec: 0xa0640073  sb          $a0, 0x73($v1)
    ctx->pc = 0x2418ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x2418f0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2418f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2418f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2418f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2418f8: 0x90620073  lbu         $v0, 0x73($v1)
    ctx->pc = 0x2418f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 115)));
    // 0x2418fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2418fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x241900: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x241900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x241904: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
    ctx->pc = 0x241904u;
    {
        const bool branch_taken_0x241904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x241904) {
            ctx->pc = 0x241A78u;
            return;
        }
    }
    ctx->pc = 0x24190Cu;
    // 0x24190c: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x24190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241910: 0x848610a6  lh          $a2, 0x10A6($a0)
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x241914: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x241914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x241918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x241918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x24191c: 0x4400056  bltz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x24191Cu;
    {
        const bool branch_taken_0x24191c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24191c) {
            ctx->pc = 0x241A78u;
            return;
        }
    }
    ctx->pc = 0x241924u;
    // 0x241924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241928: 0x0  nop
    ctx->pc = 0x241928u;
    // NOP
    // 0x24192c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24192cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x241930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x241930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241934: 0x0  nop
    ctx->pc = 0x241934u;
    // NOP
    // 0x241938: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x241938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24193c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24193cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241940: 0x0  nop
    ctx->pc = 0x241940u;
    // NOP
    // 0x241944: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x241944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x241948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x241948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24194c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24194cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x241950: 0x0  nop
    ctx->pc = 0x241950u;
    // NOP
    // 0x241954: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x241954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x241958: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x24195c: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x24195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x241960: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x241960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x241964: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x241964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x241968: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x241968u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x24196c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x241970: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x241970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x241974: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x241974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x241978: 0x2223824  and         $a3, $s1, $v0
    ctx->pc = 0x241978u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x24197c: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x24197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x241980: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241980u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241984: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241988: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241988u;
    SET_GPR_U32(ctx, 31, 0x241990u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241988u, 0x241990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241990u;
label_241990:
    // 0x241990: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241990u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241994: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241994u;
    SET_GPR_U32(ctx, 31, 0x24199Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241994u, 0x24199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24199Cu;
label_24199c:
    // 0x24199c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24199cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2419a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2419a4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2419a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2419a8: 0x24620280  addiu       $v0, $v1, 0x280
    ctx->pc = 0x2419a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
    // 0x2419ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2419acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2419b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2419b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2419b4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x2419b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2419b8: 0x52438  dsll        $a0, $a1, 16
    ctx->pc = 0x2419b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 16);
    // 0x2419bc: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x2419bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2419c0: 0x463824  and         $a3, $v0, $a2
    ctx->pc = 0x2419c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2419c4: 0x24040e13  addiu       $a0, $zero, 0xE13
    ctx->pc = 0x2419c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3603));
    // 0x2419c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2419c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2419cc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2419ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2419d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2419D0u;
    SET_GPR_U32(ctx, 31, 0x2419D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2419D0u, 0x2419D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419D8u;
label_2419d8:
    // 0x2419d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2419d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2419dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2419DCu;
    SET_GPR_U32(ctx, 31, 0x2419E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2419DCu, 0x2419E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419E4u;
label_2419e4:
    // 0x2419e4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2419e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2419e8: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x2419e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2419ec: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x2419ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2419f0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2419f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2419f4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2419f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2419f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2419f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2419fc: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x2419fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x241a00: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x241a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x241a04: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x241a04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x241a08: 0x24080e15  addiu       $t0, $zero, 0xE15
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x241a0c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x241a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x241a10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241a10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241a14: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x241a14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241a18: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x241a18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x241a1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241A1Cu;
    SET_GPR_U32(ctx, 31, 0x241A24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241A1Cu, 0x241A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A24u;
label_241a24:
    // 0x241a24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241a24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241a28: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241A28u;
    SET_GPR_U32(ctx, 31, 0x241A30u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241A28u, 0x241A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A30u;
label_241a30:
    // 0x241a30: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x241a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x241a34: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x241a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x241a38: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x241a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x241a3c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x241a3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x241a40: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x241a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x241a44: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x241a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x241a48: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x241a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x241a4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x241a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x241a50: 0x2023824  and         $a3, $s0, $v0
    ctx->pc = 0x241a50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x241a54: 0x24040e15  addiu       $a0, $zero, 0xE15
    ctx->pc = 0x241a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3605));
    // 0x241a58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x241a58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241a5c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x241a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x241a60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x241A60u;
    SET_GPR_U32(ctx, 31, 0x241A68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x241A60u, 0x241A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A68u;
label_241a68:
    // 0x241a68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241a68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x241a6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x241A6Cu;
    SET_GPR_U32(ctx, 31, 0x241A74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x241A6Cu, 0x241A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241A74u;
label_241a74:
    // 0x241a74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x241a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x241a78u;
}
