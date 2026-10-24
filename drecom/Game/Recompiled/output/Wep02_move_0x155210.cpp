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

// Function: Wep02_move
// Address: 0x155210 - 0x155590
void Wep02_move_0x155210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Wep02_move_0x155210");
#endif

    switch (ctx->pc) {
        case 0x1553acu: goto label_1553ac;
        case 0x1553b8u: goto label_1553b8;
        case 0x15541cu: goto label_15541c;
        case 0x155428u: goto label_155428;
        case 0x15543cu: goto label_15543c;
        case 0x1554d8u: goto label_1554d8;
        case 0x15553cu: goto label_15553c;
        default: break;
    }

    ctx->pc = 0x155210u;

    // 0x155210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155214: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x155214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x155218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15521c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x15521cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x155220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155224: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x155228: 0x24700190  addiu       $s0, $v1, 0x190
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x15522c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155230: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x155234: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x155234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x155238: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x155238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15523c: 0x146000cf  bnez        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x15523Cu;
    {
        const bool branch_taken_0x15523c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15523c) {
            ctx->pc = 0x15557Cu;
            goto label_15557c;
        }
    }
    ctx->pc = 0x155244u;
    // 0x155244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155248: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x155248u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15524c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15524cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155250: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155254: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x155254u;
    {
        const bool branch_taken_0x155254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x155254) {
            ctx->pc = 0x155484u;
            goto label_155484;
        }
    }
    ctx->pc = 0x15525Cu;
    // 0x15525c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155260: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x155260u;
    {
        const bool branch_taken_0x155260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x155260) {
            ctx->pc = 0x1552D0u;
            goto label_1552d0;
        }
    }
    ctx->pc = 0x155268u;
    // 0x155268: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155268u;
    {
        const bool branch_taken_0x155268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155268) {
            ctx->pc = 0x155278u;
            goto label_155278;
        }
    }
    ctx->pc = 0x155270u;
    // 0x155270: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x155270u;
    {
        const bool branch_taken_0x155270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155270) {
            ctx->pc = 0x15557Cu;
            goto label_15557c;
        }
    }
    ctx->pc = 0x155278u;
label_155278:
    // 0x155278: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15527c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155280: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x155284: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x155284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x155288: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x155288u;
    {
        const bool branch_taken_0x155288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155288) {
            ctx->pc = 0x15557Cu;
            goto label_15557c;
        }
    }
    ctx->pc = 0x155290u;
    // 0x155290: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155294: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x155294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155298: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x155298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x15529c: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x15529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x1552a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1552a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1552a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1552a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552ac: 0xa4431250  sh          $v1, 0x1250($v0)
    ctx->pc = 0x1552acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x1552b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1552b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1552b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552b8: 0xe440124c  swc1        $f0, 0x124C($v0)
    ctx->pc = 0x1552b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4684), bits); }
    // 0x1552bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1552c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1552c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1552c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1552ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1552d0:
    // 0x1552d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552d4: 0xc461124c  lwc1        $f1, 0x124C($v1)
    ctx->pc = 0x1552d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1552d8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1552dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1552dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1552e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1552e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1552e4: 0x0  nop
    ctx->pc = 0x1552e4u;
    // NOP
    // 0x1552e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1552e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1552ec: 0xe460124c  swc1        $f0, 0x124C($v1)
    ctx->pc = 0x1552ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4684), bits); }
    // 0x1552f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552f4: 0x84421250  lh          $v0, 0x1250($v0)
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x1552f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1552F8u;
    {
        const bool branch_taken_0x1552f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552f8) {
            ctx->pc = 0x155318u;
            goto label_155318;
        }
    }
    ctx->pc = 0x155300u;
    // 0x155300: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155304: 0x84621250  lh          $v0, 0x1250($v1)
    ctx->pc = 0x155304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x155308: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15530c: 0xa4621250  sh          $v0, 0x1250($v1)
    ctx->pc = 0x15530cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 2));
    // 0x155310: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x155310u;
    {
        const bool branch_taken_0x155310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155310) {
            ctx->pc = 0x155428u;
            goto label_155428;
        }
    }
    ctx->pc = 0x155318u;
label_155318:
    // 0x155318: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x155318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15531c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155320: 0xa4431250  sh          $v1, 0x1250($v0)
    ctx->pc = 0x155320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x155324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155328: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x155328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15532c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x15532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155330: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155334: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x155334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x155338: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x15533c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15533cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155340: 0x0  nop
    ctx->pc = 0x155340u;
    // NOP
    // 0x155344: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x155344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x155348: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x155348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x15534c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155350: 0x0  nop
    ctx->pc = 0x155350u;
    // NOP
    // 0x155354: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x155354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x155358: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x155358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x15535c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15535cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155360: 0x0  nop
    ctx->pc = 0x155360u;
    // NOP
    // 0x155364: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x155364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x155368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15536c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15536cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155370: 0x0  nop
    ctx->pc = 0x155370u;
    // NOP
    // 0x155374: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x155374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x155378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15537c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x155380: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x155380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155384: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x155384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x155388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x155388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15538c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x155390: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155394: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x155394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155398: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x155398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x15539c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15539cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1553a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1553a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1553a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1553A4u;
    SET_GPR_U32(ctx, 31, 0x1553ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1553A4u, 0x1553ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ACu;
label_1553ac:
    // 0x1553ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1553acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1553b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1553B0u;
    SET_GPR_U32(ctx, 31, 0x1553B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1553B0u, 0x1553B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553B8u;
label_1553b8:
    // 0x1553b8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1553bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1553bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1553c0: 0x0  nop
    ctx->pc = 0x1553c0u;
    // NOP
    // 0x1553c4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1553c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1553c8: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1553c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x1553cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1553ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1553d0: 0x0  nop
    ctx->pc = 0x1553d0u;
    // NOP
    // 0x1553d4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1553d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1553d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1553dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1553dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1553e0: 0x0  nop
    ctx->pc = 0x1553e0u;
    // NOP
    // 0x1553e4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1553e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1553e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1553ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1553ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1553f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1553f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1553f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1553f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1553f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1553f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1553fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1553fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x155400: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x155404: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x155404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x155408: 0x24041801  addiu       $a0, $zero, 0x1801
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6145));
    // 0x15540c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15540cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x155410: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x155414: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x155414u;
    SET_GPR_U32(ctx, 31, 0x15541Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x155414u, 0x15541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15541Cu;
label_15541c:
    // 0x15541c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x15541cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x155420: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x155420u;
    SET_GPR_U32(ctx, 31, 0x155428u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x155420u, 0x155428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155428u;
label_155428:
    // 0x155428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15542c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15542cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x155430: 0xc44c124c  lwc1        $f12, 0x124C($v0)
    ctx->pc = 0x155430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x155434: 0xc067844  jal         func_19E110
    ctx->pc = 0x155434u;
    SET_GPR_U32(ctx, 31, 0x15543Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x155434u, 0x15543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155440: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155444: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x155444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155448: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x155448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15544c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155450: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155454: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x155454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155458: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x155458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15545c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155460: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155464: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x155464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155468: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x155468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15546c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x155470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x155470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155474: 0x0  nop
    ctx->pc = 0x155474u;
    // NOP
    // 0x155478: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x155478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x15547c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15547Cu;
    {
        const bool branch_taken_0x15547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15547c) {
            ctx->pc = 0x15557Cu;
            goto label_15557c;
        }
    }
    ctx->pc = 0x155484u;
label_155484:
    // 0x155484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155488: 0xc461124c  lwc1        $f1, 0x124C($v1)
    ctx->pc = 0x155488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15548c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x15548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x155490: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x155490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x155494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155498: 0x0  nop
    ctx->pc = 0x155498u;
    // NOP
    // 0x15549c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15549cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1554a0: 0xe460124c  swc1        $f0, 0x124C($v1)
    ctx->pc = 0x1554a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4684), bits); }
    // 0x1554a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1554a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554a8: 0x84421250  lh          $v0, 0x1250($v0)
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x1554ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1554ACu;
    {
        const bool branch_taken_0x1554ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554ac) {
            ctx->pc = 0x1554CCu;
            goto label_1554cc;
        }
    }
    ctx->pc = 0x1554B4u;
    // 0x1554b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554b8: 0x84621250  lh          $v0, 0x1250($v1)
    ctx->pc = 0x1554b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x1554bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1554bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1554c0: 0xa4621250  sh          $v0, 0x1250($v1)
    ctx->pc = 0x1554c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 2));
    // 0x1554c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1554C4u;
    {
        const bool branch_taken_0x1554c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554c4) {
            ctx->pc = 0x155528u;
            goto label_155528;
        }
    }
    ctx->pc = 0x1554CCu;
label_1554cc:
    // 0x1554cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1554ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1554d0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1554D0u;
    SET_GPR_U32(ctx, 31, 0x1554D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1554D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1554D8u) { return; }
    ctx->pc = 0x1554D8u;
label_1554d8:
    // 0x1554d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554dc: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x1554e0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1554e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1554e4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1554e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1554e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554ec: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x1554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x1554f0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1554f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1554f4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1554f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1554f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554fc: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x1554fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155500: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x155500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155504: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x155504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x155508: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15550c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15550cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155510: 0x0  nop
    ctx->pc = 0x155510u;
    // NOP
    // 0x155514: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x155514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x155518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15551c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x15551cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x155520: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x155520u;
    {
        const bool branch_taken_0x155520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155520) {
            ctx->pc = 0x15557Cu;
            goto label_15557c;
        }
    }
    ctx->pc = 0x155528u;
label_155528:
    // 0x155528: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15552c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15552cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x155530: 0xc44c124c  lwc1        $f12, 0x124C($v0)
    ctx->pc = 0x155530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x155534: 0xc067844  jal         func_19E110
    ctx->pc = 0x155534u;
    SET_GPR_U32(ctx, 31, 0x15553Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x155534u, 0x15553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15553Cu;
label_15553c:
    // 0x15553c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155540: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155544: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x155544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155548: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x155548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15554c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155550: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155554: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x155554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155558: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x155558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15555c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155560: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155564: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x155564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155568: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x155568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15556c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x155570: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x155570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155574: 0x0  nop
    ctx->pc = 0x155574u;
    // NOP
    // 0x155578: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x155578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_15557c:
    // 0x15557c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15557cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155584: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x155584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x155588: 0x3e00008  jr          $ra
    ctx->pc = 0x155588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155590u;
}
