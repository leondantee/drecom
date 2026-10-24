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

// Function: entry_002c6350
// Address: 0x2c6350 - 0x2c64bc
void entry_002c6350_0x2c6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6350_0x2c6350");
#endif

    switch (ctx->pc) {
        case 0x2c637cu: goto label_2c637c;
        case 0x2c6384u: goto label_2c6384;
        case 0x2c63a8u: goto label_2c63a8;
        case 0x2c63ccu: goto label_2c63cc;
        default: break;
    }

    ctx->pc = 0x2c6350u;

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
            return;
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
    ctx->pc = 0x2c64bcu;
}
