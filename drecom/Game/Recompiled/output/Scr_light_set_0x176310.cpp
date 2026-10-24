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

// Function: Scr_light_set
// Address: 0x176310 - 0x1768b4
void Scr_light_set_0x176310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_light_set_0x176310");
#endif

    switch (ctx->pc) {
        case 0x176344u: goto label_176344;
        case 0x1763b0u: goto label_1763b0;
        case 0x17652cu: goto label_17652c;
        default: break;
    }

    ctx->pc = 0x176310u;

    // 0x176310: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x176310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x176314: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x176314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x176318: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x176318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17631c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17631cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x176320: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x176320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x176324: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x176324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x176328: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x176328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17632c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x176330: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x176330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x176334: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17633c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x17633cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x176340: 0xa7a500d8  sh          $a1, 0xD8($sp)
    ctx->pc = 0x176340u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 5));
label_176344:
    // 0x176344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176348: 0x9023cc94  lbu         $v1, -0x336C($at)
    ctx->pc = 0x176348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x47CC94u));
    // 0x17634c: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x17634cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x176350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x176350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176354: 0x3ac3c  dsll32      $s5, $v1, 16
    ctx->pc = 0x176354u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176358: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x176358u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x17635c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17635cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176360: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176360u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176364: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x176364u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176368: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x176368u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x17636c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17636cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176370: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176374: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x176374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176378: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x176378u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x17637c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176380: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176380u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176384: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x176384u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176388: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x176388u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x17638c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17638cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176390: 0x0  nop
    ctx->pc = 0x176390u;
    // NOP
    // 0x176394: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176398: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x176398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x17639c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1763a0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1763a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1763a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1763a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1763a8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1763A8u;
    {
        const bool branch_taken_0x1763a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763a8) {
            ctx->pc = 0x176710u;
            goto label_176710;
        }
    }
    ctx->pc = 0x1763B0u;
label_1763b0:
    // 0x1763b0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1763b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1763b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1763b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1763b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1763b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1763bc: 0x9423cc88  lhu         $v1, -0x3378($at)
    ctx->pc = 0x1763bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x1763c0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1763c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1763c4: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1763C4u;
    {
        const bool branch_taken_0x1763c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1763c4) {
            ctx->pc = 0x176408u;
            goto label_176408;
        }
    }
    ctx->pc = 0x1763CCu;
    // 0x1763cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1763ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1763d0: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1763d0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1763d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1763d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1763d8: 0x9423cc8a  lhu         $v1, -0x3376($at)
    ctx->pc = 0x1763d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x1763dc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1763dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1763e0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1763e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1763e4: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x1763e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1763e8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x1763e8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x1763ec: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1763ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1763f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1763f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1763f4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1763f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1763f8: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x1763f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x1763fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1763fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x176400: 0x108300cb  beq         $a0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x176400u;
    {
        const bool branch_taken_0x176400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176400) {
            ctx->pc = 0x176730u;
            goto label_176730;
        }
    }
    ctx->pc = 0x176408u;
label_176408:
    // 0x176408: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17640c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17640cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176410: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176418: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17641c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17641cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176420: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176428: 0x8c63007c  lw          $v1, 0x7C($v1)
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x17642c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x17642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x176430: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x176430u;
    {
        const bool branch_taken_0x176430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176430) {
            ctx->pc = 0x176700u;
            goto label_176700;
        }
    }
    ctx->pc = 0x176438u;
    // 0x176438: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17643c: 0x8c7700a0  lw          $s7, 0xA0($v1)
    ctx->pc = 0x17643cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x176440: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x176444: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x176444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x176448: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x176448u;
    {
        const bool branch_taken_0x176448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x176448) {
            ctx->pc = 0x17648Cu;
            goto label_17648c;
        }
    }
    ctx->pc = 0x176450u;
    // 0x176450: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x176450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176454: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x176454u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176458: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17645c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176460: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176464: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176468: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x17646c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176470: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x176470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x176474: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176478: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x176478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17647c: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x17647Cu;
    {
        const bool branch_taken_0x17647c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17647c) {
            ctx->pc = 0x176700u;
            goto label_176700;
        }
    }
    ctx->pc = 0x176484u;
    // 0x176484: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x176484u;
    {
        const bool branch_taken_0x176484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176484) {
            ctx->pc = 0x1764C0u;
            goto label_1764c0;
        }
    }
    ctx->pc = 0x17648Cu;
label_17648c:
    // 0x17648c: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x17648cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176490: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x176490u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176494: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17649c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17649cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1764a0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1764a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1764a4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1764a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1764a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1764ac: 0x8c64007c  lw          $a0, 0x7C($v1)
    ctx->pc = 0x1764acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1764b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1764b4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1764b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1764b8: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1764B8u;
    {
        const bool branch_taken_0x1764b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1764b8) {
            ctx->pc = 0x176700u;
            goto label_176700;
        }
    }
    ctx->pc = 0x1764C0u;
label_1764c0:
    // 0x1764c0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1764c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1764c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1764c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1764c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1764cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1764d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1764d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1764d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1764d8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1764dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1764dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1764e0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1764e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1764e4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1764e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1764e8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1764ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1764ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1764f0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1764f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1764f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1764f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1764f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1764f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1764fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1764fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176500: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x176500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176504: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x176504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x176508: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x17650c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176510: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x176510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176514: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x176514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x176518: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17651c: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x17651cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x176520: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x176520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x176524: 0xc05da44  jal         func_176910
    ctx->pc = 0x176524u;
    SET_GPR_U32(ctx, 31, 0x17652Cu);
    ctx->pc = 0x176910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176910u, 0x176524u, 0x17652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17652Cu;
label_17652c:
    // 0x17652c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x17652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176530: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x176530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x176534: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x176534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176538: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x176538u;
    {
        const bool branch_taken_0x176538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176538) {
            ctx->pc = 0x1765FCu;
            goto label_1765fc;
        }
    }
    ctx->pc = 0x176540u;
    // 0x176540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x176544: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x176544u;
    {
        const bool branch_taken_0x176544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176544) {
            ctx->pc = 0x1765CCu;
            goto label_1765cc;
        }
    }
    ctx->pc = 0x17654Cu;
    // 0x17654c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17654cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x176550: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x176550u;
    {
        const bool branch_taken_0x176550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x176550) {
            ctx->pc = 0x17659Cu;
            goto label_17659c;
        }
    }
    ctx->pc = 0x176558u;
    // 0x176558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17655c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17655Cu;
    {
        const bool branch_taken_0x17655c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17655c) {
            ctx->pc = 0x17656Cu;
            goto label_17656c;
        }
    }
    ctx->pc = 0x176564u;
    // 0x176564: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x176564u;
    {
        const bool branch_taken_0x176564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176564) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x17656Cu;
label_17656c:
    // 0x17656c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x17656cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176570: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176578: 0x0  nop
    ctx->pc = 0x176578u;
    // NOP
    // 0x17657c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x17657Cu;
    {
        const bool branch_taken_0x17657c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17657c) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x176584u;
    // 0x176584: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176588: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x176588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x17658c: 0x10a43c  dsll32      $s4, $s0, 16
    ctx->pc = 0x17658cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176590: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x176590u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x176594: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x176594u;
    {
        const bool branch_taken_0x176594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176594) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x17659Cu;
label_17659c:
    // 0x17659c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x17659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765a0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1765a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1765a8: 0x0  nop
    ctx->pc = 0x1765a8u;
    // NOP
    // 0x1765ac: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1765ACu;
    {
        const bool branch_taken_0x1765ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1765ac) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x1765B4u;
    // 0x1765b4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765b8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1765b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1765bc: 0x10943c  dsll32      $s2, $s0, 16
    ctx->pc = 0x1765bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1765c0: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1765c0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1765c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1765C4u;
    {
        const bool branch_taken_0x1765c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765c4) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x1765CCu;
label_1765cc:
    // 0x1765cc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1765ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765d0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1765d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1765d8: 0x0  nop
    ctx->pc = 0x1765d8u;
    // NOP
    // 0x1765dc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1765DCu;
    {
        const bool branch_taken_0x1765dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1765dc) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x1765E4u;
    // 0x1765e4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1765ec: 0x109c3c  dsll32      $s3, $s0, 16
    ctx->pc = 0x1765ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1765f0: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1765f0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1765f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1765F4u;
    {
        const bool branch_taken_0x1765f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765f4) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x1765FCu;
label_1765fc:
    // 0x1765fc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1765fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176600: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176608: 0x0  nop
    ctx->pc = 0x176608u;
    // NOP
    // 0x17660c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x17660Cu;
    {
        const bool branch_taken_0x17660c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17660c) {
            ctx->pc = 0x176628u;
            goto label_176628;
        }
    }
    ctx->pc = 0x176614u;
    // 0x176614: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176618: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x17661c: 0x10ac3c  dsll32      $s5, $s0, 16
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176620: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x176620u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x176624: 0x0  nop
    ctx->pc = 0x176624u;
    // NOP
label_176628:
    // 0x176628: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x176628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17662c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x17662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176630: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x176634: 0x0  nop
    ctx->pc = 0x176634u;
    // NOP
    // 0x176638: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176638u;
    {
        const bool branch_taken_0x176638 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176638) {
            ctx->pc = 0x176670u;
            goto label_176670;
        }
    }
    ctx->pc = 0x176640u;
    // 0x176640: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x176640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176644: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x176644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176648: 0x158c3c  dsll32      $s1, $s5, 16
    ctx->pc = 0x176648u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << (32 + 16));
    // 0x17664c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x17664cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x176650: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176654: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176658: 0x13ac3c  dsll32      $s5, $s3, 16
    ctx->pc = 0x176658u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 19) << (32 + 16));
    // 0x17665c: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x17665cu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x176660: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x176660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176664: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x176664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x176668: 0x119c3c  dsll32      $s3, $s1, 16
    ctx->pc = 0x176668u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) << (32 + 16));
    // 0x17666c: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x17666cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_176670:
    // 0x176670: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x176670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x176674: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x176678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17667c: 0x0  nop
    ctx->pc = 0x17667cu;
    // NOP
    // 0x176680: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x176680u;
    {
        const bool branch_taken_0x176680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x176680) {
            ctx->pc = 0x1766B8u;
            goto label_1766b8;
        }
    }
    ctx->pc = 0x176688u;
    // 0x176688: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17668c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x17668cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x176690: 0x138c3c  dsll32      $s1, $s3, 16
    ctx->pc = 0x176690u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) << (32 + 16));
    // 0x176694: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x176694u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x176698: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x176698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17669c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x17669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1766a0: 0x129c3c  dsll32      $s3, $s2, 16
    ctx->pc = 0x1766a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1766a4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1766a4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1766a8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1766a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766ac: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1766b0: 0x11943c  dsll32      $s2, $s1, 16
    ctx->pc = 0x1766b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1766b4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1766b4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_1766b8:
    // 0x1766b8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1766b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1766bc: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1766c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1766c4: 0x0  nop
    ctx->pc = 0x1766c4u;
    // NOP
    // 0x1766c8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1766C8u;
    {
        const bool branch_taken_0x1766c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1766c8) {
            ctx->pc = 0x176700u;
            goto label_176700;
        }
    }
    ctx->pc = 0x1766D0u;
    // 0x1766d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1766d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1766d8: 0x128c3c  dsll32      $s1, $s2, 16
    ctx->pc = 0x1766d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1766dc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1766dcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1766e0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1766e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766e4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1766e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1766e8: 0x14943c  dsll32      $s2, $s4, 16
    ctx->pc = 0x1766e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1766ec: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1766ecu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1766f0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1766f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1766f4: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1766f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1766f8: 0x11a43c  dsll32      $s4, $s1, 16
    ctx->pc = 0x1766f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1766fc: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x1766fcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
label_176700:
    // 0x176700: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x176700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x176704: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x176704u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176708: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x176708u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x17670c: 0x0  nop
    ctx->pc = 0x17670cu;
    // NOP
label_176710:
    // 0x176710: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x176710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x176714: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x176714u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x176718: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17671c: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x17671cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x176720: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x176720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x176724: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x176724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176728: 0x1460ff21  bnez        $v1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x176728u;
    {
        const bool branch_taken_0x176728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176728) {
            ctx->pc = 0x1763B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1763b0;
        }
    }
    ctx->pc = 0x176730u;
label_176730:
    // 0x176730: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x176730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x176734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176738: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x176738u;
    {
        const bool branch_taken_0x176738 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x176738) {
            ctx->pc = 0x176754u;
            goto label_176754;
        }
    }
    ctx->pc = 0x176740u;
    // 0x176740: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x176740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x176744: 0x3f43c  dsll32      $fp, $v1, 16
    ctx->pc = 0x176744u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176748: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x176748u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x17674c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17674Cu;
    {
        const bool branch_taken_0x17674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17674c) {
            ctx->pc = 0x176760u;
            goto label_176760;
        }
    }
    ctx->pc = 0x176754u;
label_176754:
    // 0x176754: 0x14f43c  dsll32      $fp, $s4, 16
    ctx->pc = 0x176754u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) << (32 + 16));
    // 0x176758: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x176758u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x17675c: 0x0  nop
    ctx->pc = 0x17675cu;
    // NOP
label_176760:
    // 0x176760: 0x1ea43c  dsll32      $s4, $fp, 16
    ctx->pc = 0x176760u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 30) << (32 + 16));
    // 0x176764: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x176764u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x176768: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x176768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17676c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17676cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176770: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x176770u;
    {
        const bool branch_taken_0x176770 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x176770) {
            ctx->pc = 0x176788u;
            goto label_176788;
        }
    }
    ctx->pc = 0x176778u;
    // 0x176778: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x176778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x17677c: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x17677cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x176780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x176780u;
    {
        const bool branch_taken_0x176780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176780) {
            ctx->pc = 0x176790u;
            goto label_176790;
        }
    }
    ctx->pc = 0x176788u;
label_176788:
    // 0x176788: 0xa7b200ca  sh          $s2, 0xCA($sp)
    ctx->pc = 0x176788u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 18));
    // 0x17678c: 0x0  nop
    ctx->pc = 0x17678cu;
    // NOP
label_176790:
    // 0x176790: 0x87a300ca  lh          $v1, 0xCA($sp)
    ctx->pc = 0x176790u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 202)));
    // 0x176794: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x176794u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176798: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x176798u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x17679c: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x17679cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1767a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1767a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1767a4: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1767A4u;
    {
        const bool branch_taken_0x1767a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1767a4) {
            ctx->pc = 0x1767BCu;
            goto label_1767bc;
        }
    }
    ctx->pc = 0x1767ACu;
    // 0x1767ac: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1767acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1767b0: 0xa7a300cc  sh          $v1, 0xCC($sp)
    ctx->pc = 0x1767b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 3));
    // 0x1767b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1767B4u;
    {
        const bool branch_taken_0x1767b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767b4) {
            ctx->pc = 0x1767C0u;
            goto label_1767c0;
        }
    }
    ctx->pc = 0x1767BCu;
label_1767bc:
    // 0x1767bc: 0xa7b300cc  sh          $s3, 0xCC($sp)
    ctx->pc = 0x1767bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 19));
label_1767c0:
    // 0x1767c0: 0x87a300cc  lh          $v1, 0xCC($sp)
    ctx->pc = 0x1767c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1767c4: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x1767c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1767c8: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1767c8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1767cc: 0x151c3c  dsll32      $v1, $s5, 16
    ctx->pc = 0x1767ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 16));
    // 0x1767d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1767d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1767d4: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1767D4u;
    {
        const bool branch_taken_0x1767d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1767d4) {
            ctx->pc = 0x1767ECu;
            goto label_1767ec;
        }
    }
    ctx->pc = 0x1767DCu;
    // 0x1767dc: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x1767dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1767e0: 0xa7a300ce  sh          $v1, 0xCE($sp)
    ctx->pc = 0x1767e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 206), (uint16_t)GPR_U32(ctx, 3));
    // 0x1767e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1767E4u;
    {
        const bool branch_taken_0x1767e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1767e4) {
            ctx->pc = 0x1767F0u;
            goto label_1767f0;
        }
    }
    ctx->pc = 0x1767ECu;
label_1767ec:
    // 0x1767ec: 0xa7b500ce  sh          $s5, 0xCE($sp)
    ctx->pc = 0x1767ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 206), (uint16_t)GPR_U32(ctx, 21));
label_1767f0:
    // 0x1767f0: 0x87a300ce  lh          $v1, 0xCE($sp)
    ctx->pc = 0x1767f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x1767f4: 0x3ac3c  dsll32      $s5, $v1, 16
    ctx->pc = 0x1767f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1767f8: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x1767f8u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x1767fc: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x1767fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x176800: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176804: 0xa064008c  sb          $a0, 0x8C($v1)
    ctx->pc = 0x176804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x176808: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x176808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17680c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176810: 0xa064008d  sb          $a0, 0x8D($v1)
    ctx->pc = 0x176810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 141), (uint8_t)GPR_U32(ctx, 4));
    // 0x176814: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x176814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x176818: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17681c: 0xa064008e  sb          $a0, 0x8E($v1)
    ctx->pc = 0x17681cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 142), (uint8_t)GPR_U32(ctx, 4));
    // 0x176820: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x176820u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x176824: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176828: 0xa064008f  sb          $a0, 0x8F($v1)
    ctx->pc = 0x176828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 143), (uint8_t)GPR_U32(ctx, 4));
    // 0x17682c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x17682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176830: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176834: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x176834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x176838: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x176838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17683c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17683cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176840: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x176840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x176844: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x176844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176848: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17684c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x17684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x176850: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x176850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176854: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x176854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176858: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x176858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x17685c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x17685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176860: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x176864: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x176864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x176868: 0x97a300d8  lhu         $v1, 0xD8($sp)
    ctx->pc = 0x176868u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17686c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x176870: 0xa7a300d8  sh          $v1, 0xD8($sp)
    ctx->pc = 0x176870u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 3));
    // 0x176874: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x176874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x176878: 0x1460feb2  bnez        $v1, . + 4 + (-0x14E << 2)
    ctx->pc = 0x176878u;
    {
        const bool branch_taken_0x176878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x176878) {
            ctx->pc = 0x176344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176344;
        }
    }
    ctx->pc = 0x176880u;
    // 0x176880: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x176880u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176884: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x176884u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176888: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176888u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17688c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17688cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x176890: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x176890u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176894: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x176894u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17689c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17689cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1768a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1768a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1768a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1768a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1768a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1768a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1768ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1768ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1768ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1768B4u;
}
