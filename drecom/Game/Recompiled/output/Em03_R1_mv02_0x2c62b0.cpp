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

// Function: Em03_R1_mv02
// Address: 0x2c62b0 - 0x2c6b5c
void Em03_R1_mv02_0x2c62b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv02_0x2c62b0");
#endif

    switch (ctx->pc) {
        case 0x2c637cu: goto label_2c637c;
        case 0x2c6384u: goto label_2c6384;
        case 0x2c63a8u: goto label_2c63a8;
        case 0x2c63ccu: goto label_2c63cc;
        case 0x2c64d8u: goto label_2c64d8;
        case 0x2c6504u: goto label_2c6504;
        case 0x2c6598u: goto label_2c6598;
        case 0x2c65c4u: goto label_2c65c4;
        case 0x2c6644u: goto label_2c6644;
        case 0x2c6688u: goto label_2c6688;
        case 0x2c66a8u: goto label_2c66a8;
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66c4u: goto label_2c66c4;
        case 0x2c66e4u: goto label_2c66e4;
        case 0x2c67e0u: goto label_2c67e0;
        case 0x2c684cu: goto label_2c684c;
        case 0x2c6914u: goto label_2c6914;
        case 0x2c6928u: goto label_2c6928;
        case 0x2c6980u: goto label_2c6980;
        case 0x2c6990u: goto label_2c6990;
        case 0x2c69c0u: goto label_2c69c0;
        case 0x2c69d8u: goto label_2c69d8;
        case 0x2c6abcu: goto label_2c6abc;
        case 0x2c6b04u: goto label_2c6b04;
        default: break;
    }

    ctx->pc = 0x2c62b0u;

    // 0x2c62b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c62b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c62b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c62b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c62b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c62bc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2c62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2c62c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c62c4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c62c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c62c8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2c62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2c62cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c62ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c62d0: 0x0  nop
    ctx->pc = 0x2c62d0u;
    // NOP
    // 0x2c62d4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c62d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c62d8: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x2c62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x2c62dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c62dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c62e0: 0x0  nop
    ctx->pc = 0x2c62e0u;
    // NOP
    // 0x2c62e4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c62e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c62e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c62e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c62ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c62ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c62f0: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c62f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c62f4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c62f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c62f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c62f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c62fc: 0x28640007  slti        $a0, $v1, 0x7
    ctx->pc = 0x2c62fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2c6300: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6300u;
    {
        const bool branch_taken_0x2c6300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6300) {
            ctx->pc = 0x2C6328u;
            goto label_2c6328;
        }
    }
    ctx->pc = 0x2C6308u;
    // 0x2c6308: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2c6308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2c630c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c630cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6310: 0x0  nop
    ctx->pc = 0x2c6310u;
    // NOP
    // 0x2c6314: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c6314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c6318: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2c6318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2c631c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c631cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6320: 0x0  nop
    ctx->pc = 0x2c6320u;
    // NOP
    // 0x2c6324: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c6324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2c6328:
    // 0x2c6328: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c6328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c632c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x2c632cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2c6330: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c6330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c6334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6338: 0x1064008a  beq         $v1, $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C6338u;
    {
        const bool branch_taken_0x2c6338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c6338) {
            ctx->pc = 0x2C6564u;
            goto label_2c6564;
        }
    }
    ctx->pc = 0x2C6340u;
    // 0x2c6340: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6340u;
    {
        const bool branch_taken_0x2c6340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6340) {
            ctx->pc = 0x2C6350u;
            goto label_2c6350;
        }
    }
    ctx->pc = 0x2C6348u;
    // 0x2c6348: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x2C6348u;
    {
        const bool branch_taken_0x2c6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6348) {
            ctx->pc = 0x2C6B48u;
            goto label_2c6b48;
        }
    }
    ctx->pc = 0x2C6350u;
label_2c6350:
    // 0x2c6350: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6354: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6358: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c6358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c635c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6360: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6364: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c6364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c6368: 0x24061e01  addiu       $a2, $zero, 0x1E01
    ctx->pc = 0x2c6368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x2c636c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c636cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6370: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c6370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c6374: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C6374u;
    SET_GPR_U32(ctx, 31, 0x2C637Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C6374u, 0x2C637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C637Cu;
label_2c637c:
    // 0x2c637c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C637Cu;
    SET_GPR_U32(ctx, 31, 0x2C6384u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C637Cu, 0x2C6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6384u;
label_2c6384:
    // 0x2c6384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c6384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6388: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2c6388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c638c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c6390: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2c6390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c6394: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c6394u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c6398: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c639c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x2c639cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c63a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C63A0u;
    SET_GPR_U32(ctx, 31, 0x2C63A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C63A0u, 0x2C63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63A8u;
label_2c63a8:
    // 0x2c63a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c63a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c63ac: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2c63acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2c63b0: 0x2462001e  addiu       $v0, $v1, 0x1E
    ctx->pc = 0x2c63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x2c63b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c63b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c63b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c63b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c63bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c63c0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2c63c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c63c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C63C4u;
    SET_GPR_U32(ctx, 31, 0x2C63CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C63C4u, 0x2C63CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63CCu;
label_2c63cc:
    // 0x2c63cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c63ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c63d0: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2c63d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2c63d4: 0x2464012c  addiu       $a0, $v1, 0x12C
    ctx->pc = 0x2c63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 300));
    // 0x2c63d8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2c63d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2c63dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c63dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c63e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c63e4: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2c63e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c63e8: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x2c63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x2c63ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c63ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c63f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c63f4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2c63f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2c63f8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2c63f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2c63fc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2c63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2c6400: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6404: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6408: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c640c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x2c640cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2c6410: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6414: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6418: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c641c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c6420: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6424: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c6424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c6428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c642c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6430: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6434: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c6434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c6438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c643c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6440: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6444: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c6444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c6448: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c6448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c644c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c644cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6450: 0x0  nop
    ctx->pc = 0x2c6450u;
    // NOP
    // 0x2c6454: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c6454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c6458: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2c6458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x2c645c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c645cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6460: 0x0  nop
    ctx->pc = 0x2c6460u;
    // NOP
    // 0x2c6464: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c6464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c6468: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c646c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6470: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c6470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c6474: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c6474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c6478: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c6478u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c647c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c647cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c6480: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C6480u;
    {
        const bool branch_taken_0x2c6480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6480) {
            ctx->pc = 0x2C64BCu;
            goto label_2c64bc;
        }
    }
    ctx->pc = 0x2C6488u;
    // 0x2c6488: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2c6488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2c648c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c648cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6490: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6494: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6498: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c6498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c649c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c649cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c64a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64a4: 0x0  nop
    ctx->pc = 0x2c64a4u;
    // NOP
    // 0x2c64a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2c64a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c64ac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2c64acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2c64b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64b4: 0x0  nop
    ctx->pc = 0x2c64b4u;
    // NOP
    // 0x2c64b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c64b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_2c64bc:
    // 0x2c64bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c64c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c64c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c64cc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c64ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2c64d0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C64D0u;
    SET_GPR_U32(ctx, 31, 0x2C64D8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C64D0u, 0x2C64D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64D8u;
label_2c64d8:
    // 0x2c64d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c64d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c64dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c64dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c64e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C64E0u;
    {
        const bool branch_taken_0x2c64e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64e0) {
            ctx->pc = 0x2C64FCu;
            goto label_2c64fc;
        }
    }
    ctx->pc = 0x2C64E8u;
    // 0x2c64e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c64ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c64ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c64f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c64f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c64f8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2c64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_2c64fc:
    // 0x2c64fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C64FCu;
    SET_GPR_U32(ctx, 31, 0x2C6504u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C64FCu, 0x2C6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6504u;
label_2c6504:
    // 0x2c6504: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c6504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6508: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c650c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c650cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6510: 0x0  nop
    ctx->pc = 0x2c6510u;
    // NOP
    // 0x2c6514: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c6514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6518: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c6518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c651c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c651cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6520: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c6520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6524: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c6528: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c652c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6534: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x2c6534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6538: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c653c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6540: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6544: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c654c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6550: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2c6550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c6554: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c6554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c6558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c655c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6560: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c6560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2c6564:
    // 0x2c6564: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6568: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c656c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6570: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c6574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6578: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2c6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c657c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2c657cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6580: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c6580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c6584: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6588: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c6588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c658c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c6590: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C6590u;
    SET_GPR_U32(ctx, 31, 0x2C6598u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C6590u, 0x2C6598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6598u;
label_2c6598:
    // 0x2c6598: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2c6598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2c659c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c65a4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2c65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65ac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65b0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2c65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c65b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c65b8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c65b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c65bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C65BCu;
    SET_GPR_U32(ctx, 31, 0x2C65C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C65BCu, 0x2C65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65C4u;
label_2c65c4:
    // 0x2c65c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c65c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c65cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c65d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c65d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C65D8u;
    {
        const bool branch_taken_0x2c65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c65d8) {
            ctx->pc = 0x2C65F0u;
            goto label_2c65f0;
        }
    }
    ctx->pc = 0x2C65E0u;
    // 0x2c65e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65e4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2c65e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c65e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C65E8u;
    {
        const bool branch_taken_0x2c65e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65e8) {
            ctx->pc = 0x2C6678u;
            goto label_2c6678;
        }
    }
    ctx->pc = 0x2C65F0u;
label_2c65f0:
    // 0x2c65f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c65f4: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2c65f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c65f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c65fc: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2c65fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c6600: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6604: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2c6608: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c6608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c660c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c660cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c6610: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2c6610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6614: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6614u;
    {
        const bool branch_taken_0x2c6614 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6614) {
            ctx->pc = 0x2C664Cu;
            goto label_2c664c;
        }
    }
    ctx->pc = 0x2C661Cu;
    // 0x2c661c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6620: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6624: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x2c6624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6628: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c662c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6630: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2c6630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6634: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6638: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c6638u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c663c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C663Cu;
    SET_GPR_U32(ctx, 31, 0x2C6644u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C663Cu, 0x2C6644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6644u;
label_2c6644:
    // 0x2c6644: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6648: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c6648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2c664c:
    // 0x2c664c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c664cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6650: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x2c6650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x2c6654: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c6654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c6658: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c6658u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c665c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2c665cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c6660: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6660u;
    {
        const bool branch_taken_0x2c6660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6660) {
            ctx->pc = 0x2C6678u;
            goto label_2c6678;
        }
    }
    ctx->pc = 0x2C6668u;
    // 0x2c6668: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c666c: 0x8462127c  lh          $v0, 0x127C($v1)
    ctx->pc = 0x2c666cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2c6670: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2c6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2c6674: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x2c6674u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
label_2c6678:
    // 0x2c6678: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c667c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c667cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6680: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C6680u;
    SET_GPR_U32(ctx, 31, 0x2C6688u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C6680u, 0x2C6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6688u;
label_2c6688:
    // 0x2c6688: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c668c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6690: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c6690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6694: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6698: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c669c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66a0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C66A0u;
    SET_GPR_U32(ctx, 31, 0x2C66A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C66A0u, 0x2C66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66A8u;
label_2c66a8:
    // 0x2c66a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c66acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c66b0: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C66B0u;
    SET_GPR_U32(ctx, 31, 0x2C66B8u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C66B0u, 0x2C66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66B8u;
label_2c66b8:
    // 0x2c66b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66bc: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C66BCu;
    SET_GPR_U32(ctx, 31, 0x2C66C4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C66BCu, 0x2C66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66C4u;
label_2c66c4:
    // 0x2c66c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66c8: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x2c66c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x2c66cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c66d0: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x2c66d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c66d4: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C66D4u;
    {
        const bool branch_taken_0x2c66d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c66d4) {
            ctx->pc = 0x2C6734u;
            goto label_2c6734;
        }
    }
    ctx->pc = 0x2C66DCu;
    // 0x2c66dc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C66DCu;
    SET_GPR_U32(ctx, 31, 0x2C66E4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C66DCu, 0x2C66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66E4u;
label_2c66e4:
    // 0x2c66e4: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2c66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2c66e8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2c66e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2c66ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c66ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c66f0: 0x0  nop
    ctx->pc = 0x2c66f0u;
    // NOP
    // 0x2c66f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c66f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c66f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c66f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66fc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c66fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6700: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2c6700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6704: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2c6704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2c6708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c670c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6714: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x2c6714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6718: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c671c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6720: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2c6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c672c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6730: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c6730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_2c6734:
    // 0x2c6734: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6738: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2c6738u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2c673c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C673Cu;
    {
        const bool branch_taken_0x2c673c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c673c) {
            ctx->pc = 0x2C6754u;
            goto label_2c6754;
        }
    }
    ctx->pc = 0x2C6744u;
    // 0x2c6744: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6748: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2c6748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2c674c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c6750: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x2c6750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
label_2c6754:
    // 0x2c6754: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6758: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2c6758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c675c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2c675cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2c6760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6764: 0x0  nop
    ctx->pc = 0x2c6764u;
    // NOP
    // 0x2c6768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c676c: 0x0  nop
    ctx->pc = 0x2c676cu;
    // NOP
    // 0x2c6770: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x2C6770u;
    {
        const bool branch_taken_0x2c6770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6770) {
            ctx->pc = 0x2C6860u;
            goto label_2c6860;
        }
    }
    ctx->pc = 0x2C6778u;
    // 0x2c6778: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c677c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x2c677cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x2c6780: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C6780u;
    {
        const bool branch_taken_0x2c6780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6780) {
            ctx->pc = 0x2C6860u;
            goto label_2c6860;
        }
    }
    ctx->pc = 0x2C6788u;
    // 0x2c6788: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c678c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2c678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6790: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2c6790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2c6794: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6798: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2c6798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2c679c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2c679cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c67a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c67a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c67a4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2c67a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c67a8: 0x0  nop
    ctx->pc = 0x2c67a8u;
    // NOP
    // 0x2c67ac: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x2C67ACu;
    {
        const bool branch_taken_0x2c67ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c67ac) {
            ctx->pc = 0x2C6860u;
            goto label_2c6860;
        }
    }
    ctx->pc = 0x2C67B4u;
    // 0x2c67b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c67b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c67b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c67bc: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2c67bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c67c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2c67c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2c67c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c67c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c67c8: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2c67c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c67cc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C67CCu;
    {
        const bool branch_taken_0x2c67cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c67cc) {
            ctx->pc = 0x2C6860u;
            goto label_2c6860;
        }
    }
    ctx->pc = 0x2C67D4u;
    // 0x2c67d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c67d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c67d8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C67D8u;
    SET_GPR_U32(ctx, 31, 0x2C67E0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C67D8u, 0x2C67E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C67E0u;
label_2c67e0:
    // 0x2c67e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c67e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c67e4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2c67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2c67e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c67e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c67ec: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c67f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2c67f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2c67f4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2c67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2c67f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2c67f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2c67fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c67fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6800: 0x0  nop
    ctx->pc = 0x2c6800u;
    // NOP
    // 0x2c6804: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2c6804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6808: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c680c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c680cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c6810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c6814: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c6814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6818: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c6818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c681c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c6820: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6824: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c6824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6828: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2c6828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2c682c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6830: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c6830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c6834: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6838: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2c6838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c683c: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2c683cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c6840: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c6840u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6844: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2C6844u;
    SET_GPR_U32(ctx, 31, 0x2C684Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2C6844u, 0x2C684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C684Cu;
label_2c684c:
    // 0x2c684c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6850: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2c6850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6854: 0x80830039  lb          $v1, 0x39($a0)
    ctx->pc = 0x2c6854u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x2c6858: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c6858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c685c: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x2c685cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
label_2c6860:
    // 0x2c6860: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6864: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6868: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c686c: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2C686Cu;
    {
        const bool branch_taken_0x2c686c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c686c) {
            ctx->pc = 0x2C6A3Cu;
            goto label_2c6a3c;
        }
    }
    ctx->pc = 0x2C6874u;
    // 0x2c6874: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6878: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2c6878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2c687c: 0x1460006f  bnez        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2C687Cu;
    {
        const bool branch_taken_0x2c687c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c687c) {
            ctx->pc = 0x2C6A3Cu;
            goto label_2c6a3c;
        }
    }
    ctx->pc = 0x2C6884u;
    // 0x2c6884: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c688c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6890: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2c6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6894: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2c6894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6898: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c689c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c68a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c68a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c68a4: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c68a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2c68a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c68ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c68b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c68b8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2c68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c68bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c68c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c68c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c68c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c68c8: 0x0  nop
    ctx->pc = 0x2c68c8u;
    // NOP
    // 0x2c68cc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c68ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c68d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68d4: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2c68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c68d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c68dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68e0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2c68e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68e4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2c68e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c68e8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c68ec: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c68ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68f0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c68f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c68f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c68f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c68f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c68fc: 0x0  nop
    ctx->pc = 0x2c68fcu;
    // NOP
    // 0x2c6900: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c6900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c6904: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c6904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6908: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c6908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c690c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2C690Cu;
    SET_GPR_U32(ctx, 31, 0x2C6914u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2C6914u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C6914u) { return; }
    ctx->pc = 0x2C6914u;
label_2c6914:
    // 0x2c6914: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2c6914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6918: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c691c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2c691cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6920: 0xc040c86  jal         func_103218
    ctx->pc = 0x2C6920u;
    SET_GPR_U32(ctx, 31, 0x2C6928u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x2C6928u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2C6928u) { return; }
    ctx->pc = 0x2C6928u;
label_2c6928:
    // 0x2c6928: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2c6928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c692c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2c692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6930: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2c6930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6934: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6938: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2c6938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c693c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c693cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c6940: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c6940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c6944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6948: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c694c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c6950: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6954: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6958: 0x8463000c  lh          $v1, 0xC($v1)
    ctx->pc = 0x2c6958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2c695c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C695Cu;
    {
        const bool branch_taken_0x2c695c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c695c) {
            ctx->pc = 0x2C6A3Cu;
            goto label_2c6a3c;
        }
    }
    ctx->pc = 0x2C6964u;
    // 0x2c6964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c6964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c696c: 0x0  nop
    ctx->pc = 0x2c696cu;
    // NOP
    // 0x2c6970: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c6970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c6974: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6978: 0xc067588  jal         func_19D620
    ctx->pc = 0x2C6978u;
    SET_GPR_U32(ctx, 31, 0x2C6980u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2C6978u, 0x2C6980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6980u;
label_2c6980:
    // 0x2c6980: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x2c6980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6984: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x2c6984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c6988: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C6988u;
    SET_GPR_U32(ctx, 31, 0x2C6990u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C6988u, 0x2C6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6990u;
label_2c6990:
    // 0x2c6990: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6994: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6998: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2c6998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2c699c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2c699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69a0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2c69a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2c69a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c69a8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2c69a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c69ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2c69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c69b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c69b4: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2c69b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2c69b8: 0xc045630  jal         func_1158C0
    ctx->pc = 0x2C69B8u;
    SET_GPR_U32(ctx, 31, 0x2C69C0u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x2C69B8u, 0x2C69C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69C0u;
label_2c69c0:
    // 0x2c69c0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c69c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c69c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2c69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c69c8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x2c69c8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x2c69cc: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x2c69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c69d0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2C69D0u;
    SET_GPR_U32(ctx, 31, 0x2C69D8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2C69D0u, 0x2C69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69D8u;
label_2c69d8:
    // 0x2c69d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c69dc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c69e0: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2c69e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2c69e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c69ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c69ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c69f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c69f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c69f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c69f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c69fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6a00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a04: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x2c6a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a08: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2c6a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c6a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c6a14: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c6a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c6a18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6a20: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x2c6a20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6a24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6a2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6a30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6a38: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_2c6a3c:
    // 0x2c6a3c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a40: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2c6a44: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c6a48: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x2c6a48u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6a4c: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2C6A4Cu;
    {
        const bool branch_taken_0x2c6a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a4c) {
            ctx->pc = 0x2C6B48u;
            goto label_2c6b48;
        }
    }
    ctx->pc = 0x2C6A54u;
    // 0x2c6a54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6a58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a5c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c6a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6a60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a64: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c6a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a6c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a74: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2c6a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6a78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c6a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c6a80: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x2c6a80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x2c6a84: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2c6a84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6a88: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x2c6a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a8c: 0xe4e011e0  swc1        $f0, 0x11E0($a3)
    ctx->pc = 0x2c6a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4576), bits); }
    // 0x2c6a90: 0x3c0841f0  lui         $t0, 0x41F0
    ctx->pc = 0x2c6a90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16880 << 16));
    // 0x2c6a94: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2c6a94u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6a98: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6a9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6aa0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c6aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c6aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6aa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6aac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6ab0: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x2c6ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x2c6ab4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6AB4u;
    SET_GPR_U32(ctx, 31, 0x2C6ABCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6AB4u, 0x2C6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6ABCu;
label_2c6abc:
    // 0x2c6abc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c6abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6ac0: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x2c6ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2c6ac4: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C6AC4u;
    {
        const bool branch_taken_0x2c6ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ac4) {
            ctx->pc = 0x2C6B48u;
            goto label_2c6b48;
        }
    }
    ctx->pc = 0x2C6ACCu;
    // 0x2c6acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6ad0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6ad4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2c6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c6ad8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6adc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6ae0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c6ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6ae4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6ae8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6aec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6af0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6af4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6af8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c6afc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6AFCu;
    SET_GPR_U32(ctx, 31, 0x2C6B04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6AFCu, 0x2C6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B04u;
label_2c6b04:
    // 0x2c6b04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6b08: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c6b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c6b0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6b10: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6B10u;
    {
        const bool branch_taken_0x2c6b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6b10) {
            ctx->pc = 0x2C6B48u;
            goto label_2c6b48;
        }
    }
    ctx->pc = 0x2C6B18u;
    // 0x2c6b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6b1c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c6b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6b24: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c6b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6b28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c6b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6b30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6b38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c6b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6b40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6b44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c6b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c6b48:
    // 0x2c6b48: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c6b48u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6b50: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2c6b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c6b54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6B5Cu;
}
