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

// Function: Pixel_CLUT_ctrl
// Address: 0x1a42a0 - 0x1a4b88
void Pixel_CLUT_ctrl_0x1a42a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pixel_CLUT_ctrl_0x1a42a0");
#endif

    switch (ctx->pc) {
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4b30u: goto label_1a4b30;
        default: break;
    }

    ctx->pc = 0x1a42a0u;

    // 0x1a42a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a42a4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x1a42a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1a42a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a42a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a42ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a42acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a42b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a42b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a42b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a42b8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x1a42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x1a42bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a42bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a42c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a42c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a42c4: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a42c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a42c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a42c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a42cc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1a42ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1a42d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A42D0u;
    {
        const bool branch_taken_0x1a42d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a42d0) {
            ctx->pc = 0x1A4328u;
            goto label_1a4328;
        }
    }
    ctx->pc = 0x1A42D8u;
    // 0x1a42d8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1a42d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a42dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a42e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a42e4: 0xa0640311  sb          $a0, 0x311($v1)
    ctx->pc = 0x1a42e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a42e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a42ec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a42f0: 0xa0640312  sb          $a0, 0x312($v1)
    ctx->pc = 0x1a42f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 786), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a42f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a42f8: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a42f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a42fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4300: 0x8ca4030c  lw          $a0, 0x30C($a1)
    ctx->pc = 0x1a4300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 780)));
    // 0x1a4304: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1a4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1a4308: 0xaca3030c  sw          $v1, 0x30C($a1)
    ctx->pc = 0x1a4308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 780), GPR_U32(ctx, 3));
    // 0x1a430c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4310: 0xa06002b0  sb          $zero, 0x2B0($v1)
    ctx->pc = 0x1a4310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 688), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4314: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4318: 0x8c83030c  lw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
    // 0x1a431c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a431cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4320: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4324: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a4324u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
label_1a4328:
    // 0x1a4328: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a432c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a432cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4330: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a4330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4334: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x1a4334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x1a4338: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A4338u;
    {
        const bool branch_taken_0x1a4338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4338) {
            ctx->pc = 0x1A4390u;
            goto label_1a4390;
        }
    }
    ctx->pc = 0x1A4340u;
    // 0x1a4340: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4344: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a4344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4348: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a434c: 0xa0640311  sb          $a0, 0x311($v1)
    ctx->pc = 0x1a434cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4350: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4354: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4358: 0xa0640312  sb          $a0, 0x312($v1)
    ctx->pc = 0x1a4358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 786), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a435c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4360: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a4360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4364: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4368: 0x8c83030c  lw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
    // 0x1a436c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4370: 0xac83030c  sw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 780), GPR_U32(ctx, 3));
    // 0x1a4374: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4378: 0xa08002b0  sb          $zero, 0x2B0($a0)
    ctx->pc = 0x1a4378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 688), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a437c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4380: 0x8c63030c  lw          $v1, 0x30C($v1)
    ctx->pc = 0x1a4380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a4384: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4388: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a438c: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a438cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
label_1a4390:
    // 0x1a4390: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4394: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a4398: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a439c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a439cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a43a0: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a43a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a43a4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a43a8: 0x2464cca0  addiu       $a0, $v1, -0x3360
    ctx->pc = 0x1a43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a43ac: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1a43acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a43b0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1a43b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a43b4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A43B4u;
    {
        const bool branch_taken_0x1a43b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a43b4) {
            ctx->pc = 0x1A4428u;
            goto label_1a4428;
        }
    }
    ctx->pc = 0x1A43BCu;
label_1a43bc:
    // 0x1a43bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a43bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a43c0: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a43c4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x1a43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1a43c8: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1a43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1a43cc: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1a43ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1a43d0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1a43d0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a43d4: 0x0  nop
    ctx->pc = 0x1a43d4u;
    // NOP
    // 0x1a43d8: 0x0  nop
    ctx->pc = 0x1a43d8u;
    // NOP
    // 0x1a43dc: 0x2010  mfhi        $a0
    ctx->pc = 0x1a43dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a43e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a43e4: 0xac64030c  sw          $a0, 0x30C($v1)
    ctx->pc = 0x1a43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 780), GPR_U32(ctx, 4));
    // 0x1a43e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a43ec: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a43f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a43f4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1a43f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a43f8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a43fc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a43fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a4400: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a4404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4408: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1a4408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a440c: 0x1080ffeb  beqz        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1A440Cu;
    {
        const bool branch_taken_0x1a440c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a440c) {
            ctx->pc = 0x1A43BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a43bc;
        }
    }
    ctx->pc = 0x1A4414u;
    // 0x1a4414: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4418: 0x8c63030c  lw          $v1, 0x30C($v1)
    ctx->pc = 0x1a4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a441c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a441cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4420: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4424: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a4424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
label_1a4428:
    // 0x1a4428: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a442c: 0x90230101  lbu         $v1, 0x101($at)
    ctx->pc = 0x1a442cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0101u));
    // 0x1a4430: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4434: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1a4434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a4438: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4438u;
    {
        const bool branch_taken_0x1a4438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4438) {
            ctx->pc = 0x1A4450u;
            goto label_1a4450;
        }
    }
    ctx->pc = 0x1A4440u;
    // 0x1a4440: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4444: 0x8c830300  lw          $v1, 0x300($a0)
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1a4448: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a4448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a444c: 0xac830300  sw          $v1, 0x300($a0)
    ctx->pc = 0x1a444cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 3));
label_1a4450:
    // 0x1a4450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4454: 0x90230101  lbu         $v1, 0x101($at)
    ctx->pc = 0x1a4454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0101u));
    // 0x1a4458: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a445c: 0x286100c1  slti        $at, $v1, 0xC1
    ctx->pc = 0x1a445cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x1a4460: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4460u;
    {
        const bool branch_taken_0x1a4460 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4460) {
            ctx->pc = 0x1A4478u;
            goto label_1a4478;
        }
    }
    ctx->pc = 0x1A4468u;
    // 0x1a4468: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a446c: 0x8ca40300  lw          $a0, 0x300($a1)
    ctx->pc = 0x1a446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 768)));
    // 0x1a4470: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x1a4470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1a4474: 0xaca30300  sw          $v1, 0x300($a1)
    ctx->pc = 0x1a4474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 768), GPR_U32(ctx, 3));
label_1a4478:
    // 0x1a4478: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a447c: 0x90230100  lbu         $v1, 0x100($at)
    ctx->pc = 0x1a447cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0100u));
    // 0x1a4480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4484: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x1a4484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a4488: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4488u;
    {
        const bool branch_taken_0x1a4488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4488) {
            ctx->pc = 0x1A44A0u;
            goto label_1a44a0;
        }
    }
    ctx->pc = 0x1A4490u;
    // 0x1a4490: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4494: 0x8c8302fc  lw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x1a4498: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a4498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1a449c: 0xac8302fc  sw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a449cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 764), GPR_U32(ctx, 3));
label_1a44a0:
    // 0x1a44a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a44a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a44a4: 0x90240100  lbu         $a0, 0x100($at)
    ctx->pc = 0x1a44a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D0100u));
    // 0x1a44a8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a44a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a44ac: 0x286100c1  slti        $at, $v1, 0xC1
    ctx->pc = 0x1a44acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x1a44b0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A44B0u;
    {
        const bool branch_taken_0x1a44b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a44b0) {
            ctx->pc = 0x1A44C8u;
            goto label_1a44c8;
        }
    }
    ctx->pc = 0x1A44B8u;
    // 0x1a44b8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44bc: 0x8ca402fc  lw          $a0, 0x2FC($a1)
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 764)));
    // 0x1a44c0: 0x2483fff8  addiu       $v1, $a0, -0x8
    ctx->pc = 0x1a44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x1a44c4: 0xaca302fc  sw          $v1, 0x2FC($a1)
    ctx->pc = 0x1a44c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 764), GPR_U32(ctx, 3));
label_1a44c8:
    // 0x1a44c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44cc: 0x8c6302fc  lw          $v1, 0x2FC($v1)
    ctx->pc = 0x1a44ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 764)));
    // 0x1a44d0: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x1a44d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a44d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a44d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44d8: 0x8c8602fc  lw          $a2, 0x2FC($a0)
    ctx->pc = 0x1a44d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x1a44dc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1a44dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a44e0: 0xac8302fc  sw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 764), GPR_U32(ctx, 3));
    // 0x1a44e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44e8: 0x8c830300  lw          $v1, 0x300($a0)
    ctx->pc = 0x1a44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1a44ec: 0x3282a  slt         $a1, $zero, $v1
    ctx->pc = 0x1a44ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a44f0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a44f4: 0x8c830300  lw          $v1, 0x300($a0)
    ctx->pc = 0x1a44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 768)));
    // 0x1a44f8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1a44f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a44fc: 0xac830300  sw          $v1, 0x300($a0)
    ctx->pc = 0x1a44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 3));
    // 0x1a4500: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4504: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a4504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a4508: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a450c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a4510: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4514: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a4518: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a451c: 0x8c8302fc  lw          $v1, 0x2FC($a0)
    ctx->pc = 0x1a451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 764)));
    // 0x1a4520: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4524: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4528: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a4528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a452c: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1a452cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4530: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4530u;
    {
        const bool branch_taken_0x1a4530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4530) {
            ctx->pc = 0x1A4548u;
            goto label_1a4548;
        }
    }
    ctx->pc = 0x1A4538u;
    // 0x1a4538: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a453c: 0x8c7202fc  lw          $s2, 0x2FC($v1)
    ctx->pc = 0x1a453cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 764)));
    // 0x1a4540: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A4540u;
    {
        const bool branch_taken_0x1a4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4540) {
            ctx->pc = 0x1A4570u;
            goto label_1a4570;
        }
    }
    ctx->pc = 0x1A4548u;
label_1a4548:
    // 0x1a4548: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a454c: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a454cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a4550: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4554: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a4558: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a455c: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x1a455cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a4560: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1a4560u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a4564: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4568: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1a4568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a456c: 0x649023  subu        $s2, $v1, $a0
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a4570:
    // 0x1a4570: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4574: 0xac7202fc  sw          $s2, 0x2FC($v1)
    ctx->pc = 0x1a4574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 18));
    // 0x1a4578: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a457c: 0x90650312  lbu         $a1, 0x312($v1)
    ctx->pc = 0x1a457cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 786)));
    // 0x1a4580: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1a4580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a4584: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a4588: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a458c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1a458cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a4590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4594: 0x8c630300  lw          $v1, 0x300($v1)
    ctx->pc = 0x1a4594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x1a4598: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a4598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a459c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45a0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x1a45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a45a4: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1a45a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a45a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A45A8u;
    {
        const bool branch_taken_0x1a45a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45a8) {
            ctx->pc = 0x1A45C0u;
            goto label_1a45c0;
        }
    }
    ctx->pc = 0x1A45B0u;
    // 0x1a45b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45b4: 0x8c730300  lw          $s3, 0x300($v1)
    ctx->pc = 0x1a45b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x1a45b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A45B8u;
    {
        const bool branch_taken_0x1a45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45b8) {
            ctx->pc = 0x1A45E4u;
            goto label_1a45e4;
        }
    }
    ctx->pc = 0x1A45C0u;
label_1a45c0:
    // 0x1a45c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45c4: 0x90830312  lbu         $v1, 0x312($a0)
    ctx->pc = 0x1a45c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 786)));
    // 0x1a45c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a45c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a45cc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a45d0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a45d4: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x1a45d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a45d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45dc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a45e0: 0x659823  subu        $s3, $v1, $a1
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a45e4:
    // 0x1a45e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45e8: 0xac930300  sw          $s3, 0x300($a0)
    ctx->pc = 0x1a45e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 19));
    // 0x1a45ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a45ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a45f0: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a45f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a45f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a45f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a45f8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1a45f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1a45fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A45FCu;
    {
        const bool branch_taken_0x1a45fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45fc) {
            ctx->pc = 0x1A4614u;
            goto label_1a4614;
        }
    }
    ctx->pc = 0x1A4604u;
    // 0x1a4604: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4608: 0x80830310  lb          $v1, 0x310($a0)
    ctx->pc = 0x1a4608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1a460c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4610: 0xa0830310  sb          $v1, 0x310($a0)
    ctx->pc = 0x1a4610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 784), (uint8_t)GPR_U32(ctx, 3));
label_1a4614:
    // 0x1a4614: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4618: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4618u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a461c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4620: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1a4620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1a4624: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4624u;
    {
        const bool branch_taken_0x1a4624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4624) {
            ctx->pc = 0x1A463Cu;
            goto label_1a463c;
        }
    }
    ctx->pc = 0x1A462Cu;
    // 0x1a462c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4630: 0x80830310  lb          $v1, 0x310($a0)
    ctx->pc = 0x1a4630u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1a4634: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4638: 0xa0830310  sb          $v1, 0x310($a0)
    ctx->pc = 0x1a4638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 784), (uint8_t)GPR_U32(ctx, 3));
label_1a463c:
    // 0x1a463c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a463cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4640: 0x90630317  lbu         $v1, 0x317($v1)
    ctx->pc = 0x1a4640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 791)));
    // 0x1a4644: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4644u;
    {
        const bool branch_taken_0x1a4644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4644) {
            ctx->pc = 0x1A4680u;
            goto label_1a4680;
        }
    }
    ctx->pc = 0x1A464Cu;
    // 0x1a464c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4650: 0x80630310  lb          $v1, 0x310($v1)
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 784)));
    // 0x1a4654: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a4658: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a4658u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a465c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1a465cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a4660: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4660u;
    {
        const bool branch_taken_0x1a4660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4660) {
            ctx->pc = 0x1A4680u;
            goto label_1a4680;
        }
    }
    ctx->pc = 0x1A4668u;
    // 0x1a4668: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a466c: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a466cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4670: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4674: 0x808302b0  lb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x1a4678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a467c: 0xa08302b0  sb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a467cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 688), (uint8_t)GPR_U32(ctx, 3));
label_1a4680:
    // 0x1a4680: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4684: 0x80630310  lb          $v1, 0x310($v1)
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 784)));
    // 0x1a4688: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a4688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a468c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a468cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a4690: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A4690u;
    {
        const bool branch_taken_0x1a4690 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a4690) {
            ctx->pc = 0x1A46E4u;
            goto label_1a46e4;
        }
    }
    ctx->pc = 0x1A4698u;
    // 0x1a4698: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a469c: 0xa0600310  sb          $zero, 0x310($v1)
    ctx->pc = 0x1a469cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a46a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46a4: 0x90630317  lbu         $v1, 0x317($v1)
    ctx->pc = 0x1a46a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 791)));
    // 0x1a46a8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A46A8u;
    {
        const bool branch_taken_0x1a46a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a46a8) {
            ctx->pc = 0x1A46E4u;
            goto label_1a46e4;
        }
    }
    ctx->pc = 0x1A46B0u;
    // 0x1a46b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46b4: 0x806302b0  lb          $v1, 0x2B0($v1)
    ctx->pc = 0x1a46b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 688)));
    // 0x1a46b8: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1a46b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1a46bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a46bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a46c0: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A46C0u;
    {
        const bool branch_taken_0x1a46c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a46c0) {
            ctx->pc = 0x1A46E4u;
            goto label_1a46e4;
        }
    }
    ctx->pc = 0x1A46C8u;
    // 0x1a46c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46cc: 0x808302b0  lb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 688)));
    // 0x1a46d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a46d4: 0xa08302b0  sb          $v1, 0x2B0($a0)
    ctx->pc = 0x1a46d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 688), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a46d8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1a46d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a46dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a46e0: 0xa0640310  sb          $a0, 0x310($v1)
    ctx->pc = 0x1a46e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 784), (uint8_t)GPR_U32(ctx, 4));
label_1a46e4:
    // 0x1a46e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a46e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a46e8: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a46e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a46ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a46ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a46f0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1a46f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1a46f4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A46F4u;
    {
        const bool branch_taken_0x1a46f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a46f4) {
            ctx->pc = 0x1A475Cu;
            goto label_1a475c;
        }
    }
    ctx->pc = 0x1A46FCu;
    // 0x1a46fc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4700: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a4700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a4704: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4708: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a470c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A470Cu;
    {
        const bool branch_taken_0x1a470c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a470c) {
            ctx->pc = 0x1A4724u;
            goto label_1a4724;
        }
    }
    ctx->pc = 0x1A4714u;
    // 0x1a4714: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4718: 0x90830311  lbu         $v1, 0x311($a0)
    ctx->pc = 0x1a4718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 785)));
    // 0x1a471c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a4720: 0xa0830311  sb          $v1, 0x311($a0)
    ctx->pc = 0x1a4720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 785), (uint8_t)GPR_U32(ctx, 3));
label_1a4724:
    // 0x1a4724: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4728: 0x90630312  lbu         $v1, 0x312($v1)
    ctx->pc = 0x1a4728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 786)));
    // 0x1a472c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a472cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4730: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1a4730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a4734: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4734u;
    {
        const bool branch_taken_0x1a4734 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a4734) {
            ctx->pc = 0x1A474Cu;
            goto label_1a474c;
        }
    }
    ctx->pc = 0x1A473Cu;
    // 0x1a473c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4740: 0x90830312  lbu         $v1, 0x312($a0)
    ctx->pc = 0x1a4740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 786)));
    // 0x1a4744: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1a4744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1a4748: 0xa0830312  sb          $v1, 0x312($a0)
    ctx->pc = 0x1a4748u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 786), (uint8_t)GPR_U32(ctx, 3));
label_1a474c:
    // 0x1a474c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4750: 0xac6002fc  sw          $zero, 0x2FC($v1)
    ctx->pc = 0x1a4750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 0));
    // 0x1a4754: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4758: 0xac600300  sw          $zero, 0x300($v1)
    ctx->pc = 0x1a4758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 768), GPR_U32(ctx, 0));
label_1a475c:
    // 0x1a475c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a475cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4760: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4764: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4768: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1a4768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1a476c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A476Cu;
    {
        const bool branch_taken_0x1a476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a476c) {
            ctx->pc = 0x1A47DCu;
            goto label_1a47dc;
        }
    }
    ctx->pc = 0x1A4774u;
    // 0x1a4774: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4778: 0x90630311  lbu         $v1, 0x311($v1)
    ctx->pc = 0x1a4778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 785)));
    // 0x1a477c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a477cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4780: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a4784: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1a4784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1a4788: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4788u;
    {
        const bool branch_taken_0x1a4788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4788) {
            ctx->pc = 0x1A47A0u;
            goto label_1a47a0;
        }
    }
    ctx->pc = 0x1A4790u;
    // 0x1a4790: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4794: 0x90830311  lbu         $v1, 0x311($a0)
    ctx->pc = 0x1a4794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 785)));
    // 0x1a4798: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a4798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a479c: 0xa0830311  sb          $v1, 0x311($a0)
    ctx->pc = 0x1a479cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 785), (uint8_t)GPR_U32(ctx, 3));
label_1a47a0:
    // 0x1a47a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47a4: 0x90630312  lbu         $v1, 0x312($v1)
    ctx->pc = 0x1a47a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 786)));
    // 0x1a47a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a47a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a47ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a47acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a47b0: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x1a47b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x1a47b4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A47B4u;
    {
        const bool branch_taken_0x1a47b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47b4) {
            ctx->pc = 0x1A47CCu;
            goto label_1a47cc;
        }
    }
    ctx->pc = 0x1A47BCu;
    // 0x1a47bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47c0: 0x90830312  lbu         $v1, 0x312($a0)
    ctx->pc = 0x1a47c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 786)));
    // 0x1a47c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1a47c8: 0xa0830312  sb          $v1, 0x312($a0)
    ctx->pc = 0x1a47c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 786), (uint8_t)GPR_U32(ctx, 3));
label_1a47cc:
    // 0x1a47cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47d0: 0xac6002fc  sw          $zero, 0x2FC($v1)
    ctx->pc = 0x1a47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 0));
    // 0x1a47d4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a47d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47d8: 0xac600300  sw          $zero, 0x300($v1)
    ctx->pc = 0x1a47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 768), GPR_U32(ctx, 0));
label_1a47dc:
    // 0x1a47dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a47dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a47e0: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a47e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a47e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a47e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a47e8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a47e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a47ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A47ECu;
    {
        const bool branch_taken_0x1a47ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47ec) {
            ctx->pc = 0x1A4810u;
            goto label_1a4810;
        }
    }
    ctx->pc = 0x1A47F4u;
    // 0x1a47f4: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x1a47f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a47f8: 0x92030318  lbu         $v1, 0x318($s0)
    ctx->pc = 0x1a47f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1a47fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a47fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4800: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a4800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a4804: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1a4804u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4808: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a480c: 0xa0900318  sb          $s0, 0x318($a0)
    ctx->pc = 0x1a480cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 792), (uint8_t)GPR_U32(ctx, 16));
label_1a4810:
    // 0x1a4810: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4814: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4818: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a4818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a481c: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x1a481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1a4820: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A4820u;
    {
        const bool branch_taken_0x1a4820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4820) {
            ctx->pc = 0x1A485Cu;
            goto label_1a485c;
        }
    }
    ctx->pc = 0x1A4828u;
    // 0x1a4828: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a482c: 0x90650315  lbu         $a1, 0x315($v1)
    ctx->pc = 0x1a482cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 789)));
    // 0x1a4830: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4830u;
    {
        const bool branch_taken_0x1a4830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4830) {
            ctx->pc = 0x1A485Cu;
            goto label_1a485c;
        }
    }
    ctx->pc = 0x1A4838u;
    // 0x1a4838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a483c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4840: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1a4840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4844: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4848: 0xa0600305  sb          $zero, 0x305($v1)
    ctx->pc = 0x1a4848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 773), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a484c: 0x263c  dsll32      $a0, $zero, 24
    ctx->pc = 0x1a484cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 24));
    // 0x1a4850: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x1a4850u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1a4854: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4858: 0xa0640304  sb          $a0, 0x304($v1)
    ctx->pc = 0x1a4858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 772), (uint8_t)GPR_U32(ctx, 4));
label_1a485c:
    // 0x1a485c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4860: 0x942400cc  lhu         $a0, 0xCC($at)
    ctx->pc = 0x1a4860u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4864: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a4864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a4868: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1a4868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1a486c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A486Cu;
    {
        const bool branch_taken_0x1a486c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a486c) {
            ctx->pc = 0x1A488Cu;
            goto label_1a488c;
        }
    }
    ctx->pc = 0x1A4874u;
    // 0x1a4874: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1a4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4878: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a487c: 0xa0640311  sb          $a0, 0x311($v1)
    ctx->pc = 0x1a487cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 785), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4880: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a4884: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4888: 0xa0900312  sb          $s0, 0x312($a0)
    ctx->pc = 0x1a4888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 786), (uint8_t)GPR_U32(ctx, 16));
label_1a488c:
    // 0x1a488c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a488cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4890: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4890u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4894: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a4894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4898: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1a4898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a489c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A489Cu;
    {
        const bool branch_taken_0x1a489c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a489c) {
            ctx->pc = 0x1A48C0u;
            goto label_1a48c0;
        }
    }
    ctx->pc = 0x1A48A4u;
    // 0x1a48a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a48a8: 0x9064031a  lbu         $a0, 0x31A($v1)
    ctx->pc = 0x1a48a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 794)));
    // 0x1a48ac: 0x4182b  sltu        $v1, $zero, $a0
    ctx->pc = 0x1a48acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a48b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a48b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a48b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a48b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a48b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a48bc: 0xa064031a  sb          $a0, 0x31A($v1)
    ctx->pc = 0x1a48bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 794), (uint8_t)GPR_U32(ctx, 4));
label_1a48c0:
    // 0x1a48c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a48c4: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a48c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a48c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a48c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a48cc: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x1a48ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1a48d0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A48D0u;
    {
        const bool branch_taken_0x1a48d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a48d0) {
            ctx->pc = 0x1A4970u;
            goto label_1a4970;
        }
    }
    ctx->pc = 0x1A48D8u;
label_1a48d8:
    // 0x1a48d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a48dc: 0x9064031c  lbu         $a0, 0x31C($v1)
    ctx->pc = 0x1a48dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a48e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1a48e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a48e4: 0x246300d1  addiu       $v1, $v1, 0xD1
    ctx->pc = 0x1a48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 209));
    // 0x1a48e8: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1a48ec: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1a48ecu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a48f0: 0x0  nop
    ctx->pc = 0x1a48f0u;
    // NOP
    // 0x1a48f4: 0x0  nop
    ctx->pc = 0x1a48f4u;
    // NOP
    // 0x1a48f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1a48f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a48fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a48fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4900: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4904: 0xa064031c  sb          $a0, 0x31C($v1)
    ctx->pc = 0x1a4904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 796), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a4908: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a490c: 0x9063031c  lbu         $v1, 0x31C($v1)
    ctx->pc = 0x1a490cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a4910: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4914: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a491c: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a4920: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a4920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a4924: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a4924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a4928: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a492c: 0x9464001a  lhu         $a0, 0x1A($v1)
    ctx->pc = 0x1a492cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a4930: 0x41dbc  dsll32      $v1, $a0, 22
    ctx->pc = 0x1a4930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 22));
    // 0x1a4934: 0x336be  dsrl32      $a2, $v1, 26
    ctx->pc = 0x1a4934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a4938: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a493c: 0x8ca4030c  lw          $a0, 0x30C($a1)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 780)));
    // 0x1a4940: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4948: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a4948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a494c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4950: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4954: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a4954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4958: 0x9483001a  lhu         $v1, 0x1A($a0)
    ctx->pc = 0x1a4958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x1a495c: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x1a495cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a4960: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x1a4960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a4964: 0x14c3ffdc  bne         $a2, $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A4964u;
    {
        const bool branch_taken_0x1a4964 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4964) {
            ctx->pc = 0x1A48D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a48d8;
        }
    }
    ctx->pc = 0x1A496Cu;
    // 0x1a496c: 0x0  nop
    ctx->pc = 0x1a496cu;
    // NOP
label_1a4970:
    // 0x1a4970: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4974: 0x942400cc  lhu         $a0, 0xCC($at)
    ctx->pc = 0x1a4974u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4978: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1a4978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1a497c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1a497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1a4980: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A4980u;
    {
        const bool branch_taken_0x1a4980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4980) {
            ctx->pc = 0x1A4A20u;
            goto label_1a4a20;
        }
    }
    ctx->pc = 0x1A4988u;
label_1a4988:
    // 0x1a4988: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a498c: 0x9063031c  lbu         $v1, 0x31C($v1)
    ctx->pc = 0x1a498cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a4990: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a4990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4994: 0x24a400cf  addiu       $a0, $a1, 0xCF
    ctx->pc = 0x1a4994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 207));
    // 0x1a4998: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x1a4998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1a499c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1a499cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a49a0: 0x0  nop
    ctx->pc = 0x1a49a0u;
    // NOP
    // 0x1a49a4: 0x0  nop
    ctx->pc = 0x1a49a4u;
    // NOP
    // 0x1a49a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1a49a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1a49ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a49acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a49b0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a49b4: 0xa083031c  sb          $v1, 0x31C($a0)
    ctx->pc = 0x1a49b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 796), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a49b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a49bc: 0x9063031c  lbu         $v1, 0x31C($v1)
    ctx->pc = 0x1a49bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 796)));
    // 0x1a49c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a49c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a49c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a49c8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a49cc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a49d0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a49d4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a49d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a49dc: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x1a49dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a49e0: 0x325bc  dsll32      $a0, $v1, 22
    ctx->pc = 0x1a49e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a49e4: 0x436be  dsrl32      $a2, $a0, 26
    ctx->pc = 0x1a49e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) >> (32 + 26));
    // 0x1a49e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a49ec: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a49f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a49f4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a49f8: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a49f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a49fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4a00: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a08: 0x9463001a  lhu         $v1, 0x1A($v1)
    ctx->pc = 0x1a4a08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x1a4a0c: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x1a4a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
    // 0x1a4a10: 0x326be  dsrl32      $a0, $v1, 26
    ctx->pc = 0x1a4a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x1a4a14: 0x14c4ffdc  bne         $a2, $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1A4A14u;
    {
        const bool branch_taken_0x1a4a14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a4a14) {
            ctx->pc = 0x1A4988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4988;
        }
    }
    ctx->pc = 0x1A4A1Cu;
    // 0x1a4a1c: 0x0  nop
    ctx->pc = 0x1a4a1cu;
    // NOP
label_1a4a20:
    // 0x1a4a20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4a24: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4a28: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a4a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4a2c: 0x30a50800  andi        $a1, $a1, 0x800
    ctx->pc = 0x1a4a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2048);
    // 0x1a4a30: 0x10a00040  beqz        $a1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1A4A30u;
    {
        const bool branch_taken_0x1a4a30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a30) {
            ctx->pc = 0x1A4B34u;
            goto label_1a4b34;
        }
    }
    ctx->pc = 0x1A4A38u;
    // 0x1a4a38: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4a3c: 0x8ca4030c  lw          $a0, 0x30C($a1)
    ctx->pc = 0x1a4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 780)));
    // 0x1a4a40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4a44: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a48: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1a4a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a4a4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4a50: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4a54: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1a4a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a58: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x1a4a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1a4a5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4a60: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A4A60u;
    {
        const bool branch_taken_0x1a4a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a60) {
            ctx->pc = 0x1A4AECu;
            goto label_1a4aec;
        }
    }
    ctx->pc = 0x1A4A68u;
    // 0x1a4a68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4a6c: 0x8c64030c  lw          $a0, 0x30C($v1)
    ctx->pc = 0x1a4a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 780)));
    // 0x1a4a70: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4a74: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4a78: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a4a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a4a7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1a4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1a4a80: 0x2483cca0  addiu       $v1, $a0, -0x3360
    ctx->pc = 0x1a4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954144));
    // 0x1a4a84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a4a88: 0x8c720008  lw          $s2, 0x8($v1)
    ctx->pc = 0x1a4a88u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a4a8c: 0x72408e28  paddub      $s1, $s2, $zero
    ctx->pc = 0x1a4a8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1a4a90: 0x26230018  addiu       $v1, $s1, 0x18
    ctx->pc = 0x1a4a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1a4a94: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a4a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4a98: 0x30653fff  andi        $a1, $v1, 0x3FFF
    ctx->pc = 0x1a4a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1a4a9c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a4a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a4aa0: 0xc05e3d4  jal         func_178F50
    ctx->pc = 0x1A4AA0u;
    SET_GPR_U32(ctx, 31, 0x1A4AA8u);
    ctx->pc = 0x178F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178F50u, 0x1A4AA0u, 0x1A4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AA8u;
label_1a4aa8:
    // 0x1a4aa8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a4aa8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a4aac: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4ab0: 0x8c83030c  lw          $v1, 0x30C($a0)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 780)));
    // 0x1a4ab4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a4ab8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a4abc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a4ac0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4ac4: 0x2463cca0  addiu       $v1, $v1, -0x3360
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4ac8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4acc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1a4accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1a4ad0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a4ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4ad4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1a4ad4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a4ad8: 0xc05e4ac  jal         func_1792B0
    ctx->pc = 0x1A4AD8u;
    SET_GPR_U32(ctx, 31, 0x1A4AE0u);
    ctx->pc = 0x1792B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1792B0u, 0x1A4AD8u, 0x1A4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AE0u;
label_1a4ae0:
    // 0x1a4ae0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a4ae0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1a4ae4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4AE4u;
    {
        const bool branch_taken_0x1a4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ae4) {
            ctx->pc = 0x1A4B34u;
            goto label_1a4b34;
        }
    }
    ctx->pc = 0x1A4AECu;
label_1a4aec:
    // 0x1a4aec: 0x8fb30058  lw          $s3, 0x58($sp)
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4af0: 0x8e64030c  lw          $a0, 0x30C($s3)
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
    // 0x1a4af4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4afc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a4b00: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4b04: 0x2465cca0  addiu       $a1, $v1, -0x3360
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4b08: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a4b0c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1a4b0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a4b10: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a4b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a4b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4b18: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4B18u;
    {
        const bool branch_taken_0x1a4b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4b18) {
            ctx->pc = 0x1A4B34u;
            goto label_1a4b34;
        }
    }
    ctx->pc = 0x1A4B20u;
    // 0x1a4b20: 0x8fb30058  lw          $s3, 0x58($sp)
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4b24: 0x8e64030c  lw          $a0, 0x30C($s3)
    ctx->pc = 0x1a4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
    // 0x1a4b28: 0xc05e964  jal         func_17A590
    ctx->pc = 0x1A4B28u;
    SET_GPR_U32(ctx, 31, 0x1A4B30u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x1A4B28u, 0x1A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a4b30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a4b34:
    // 0x1a4b34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4b38: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4b3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4b40: 0x30640100  andi        $a0, $v1, 0x100
    ctx->pc = 0x1a4b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1a4b44: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B44u;
    {
        const bool branch_taken_0x1a4b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b44) {
            ctx->pc = 0x1A4B68u;
            goto label_1a4b68;
        }
    }
    ctx->pc = 0x1A4B4Cu;
    // 0x1a4b4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4b50: 0x90630319  lbu         $v1, 0x319($v1)
    ctx->pc = 0x1a4b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 793)));
    // 0x1a4b54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a4b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4b58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a4b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a4b5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4b60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4b64: 0xa0830319  sb          $v1, 0x319($a0)
    ctx->pc = 0x1a4b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 793), (uint8_t)GPR_U32(ctx, 3));
label_1a4b68:
    // 0x1a4b68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x1a4b68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a4b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4b7c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a4b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a4b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4B88u;
}
