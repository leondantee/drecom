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

// Function: Plw01_move05
// Address: 0x1bd480 - 0x1bd748
void Plw01_move05_0x1bd480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move05_0x1bd480");
#endif

    switch (ctx->pc) {
        case 0x1bd518u: goto label_1bd518;
        case 0x1bd530u: goto label_1bd530;
        case 0x1bd540u: goto label_1bd540;
        case 0x1bd560u: goto label_1bd560;
        case 0x1bd584u: goto label_1bd584;
        case 0x1bd5a0u: goto label_1bd5a0;
        case 0x1bd5b4u: goto label_1bd5b4;
        case 0x1bd5c0u: goto label_1bd5c0;
        case 0x1bd5e0u: goto label_1bd5e0;
        case 0x1bd72cu: goto label_1bd72c;
        default: break;
    }

    ctx->pc = 0x1bd480u;

    // 0x1bd480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bd484: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bd484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bd488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bd488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bd48c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bd48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bd490: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bd494: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bd494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bd498: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bd498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bd49c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1bd4a0: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1bd4a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1bd4a8: 0xac231a64  sw          $v1, 0x1A64($at)
    ctx->pc = 0x1bd4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1bd4ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd4b0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bd4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bd4b4: 0x3c0397ff  lui         $v1, 0x97FF
    ctx->pc = 0x1bd4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38911 << 16));
    // 0x1bd4b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bd4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bd4bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd4c0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bd4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bd4c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd4c8: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bd4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd4cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bd4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd4d4: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BD4D4u;
    {
        const bool branch_taken_0x1bd4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bd4d4) {
            ctx->pc = 0x1BD550u;
            goto label_1bd550;
        }
    }
    ctx->pc = 0x1BD4DCu;
    // 0x1bd4dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD4DCu;
    {
        const bool branch_taken_0x1bd4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4dc) {
            ctx->pc = 0x1BD4ECu;
            goto label_1bd4ec;
        }
    }
    ctx->pc = 0x1BD4E4u;
    // 0x1bd4e4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD734u;
            goto label_1bd734;
        }
    }
    ctx->pc = 0x1BD4ECu;
label_1bd4ec:
    // 0x1bd4ec: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bd4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bd4f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd4f4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1bd4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd4f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd4fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd500: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1bd504: 0x24060a49  addiu       $a2, $zero, 0xA49
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2633));
    // 0x1bd508: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bd508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd50c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bd510: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BD510u;
    SET_GPR_U32(ctx, 31, 0x1BD518u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BD510u, 0x1BD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD518u;
label_1bd518:
    // 0x1bd518: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd51c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd520: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bd520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd524: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd528: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BD528u;
    SET_GPR_U32(ctx, 31, 0x1BD530u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BD528u, 0x1BD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD530u;
label_1bd530:
    // 0x1bd530: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bd530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bd534: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bd534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd538: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x1BD538u;
    SET_GPR_U32(ctx, 31, 0x1BD540u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x1BD538u, 0x1BD540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD540u;
label_1bd540:
    // 0x1bd540: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd544: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bd544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bd548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd54c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bd54cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bd550:
    // 0x1bd550: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd554: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bd554u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd558: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BD558u;
    SET_GPR_U32(ctx, 31, 0x1BD560u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BD558u, 0x1BD560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD560u;
label_1bd560:
    // 0x1bd560: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1bd564: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bd564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1bd568: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1bd568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1bd56c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd574: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1bd574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd578: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bd578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bd57c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1BD57Cu;
    SET_GPR_U32(ctx, 31, 0x1BD584u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1BD57Cu, 0x1BD584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD584u;
label_1bd584:
    // 0x1bd584: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd588: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1bd588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1bd58c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd590: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd594: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1bd594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bd598: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1BD598u;
    SET_GPR_U32(ctx, 31, 0x1BD5A0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1BD598u, 0x1BD5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5A0u;
label_1bd5a0:
    // 0x1bd5a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bd5a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd5a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bd5a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd5ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BD5ACu;
    SET_GPR_U32(ctx, 31, 0x1BD5B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BD5ACu, 0x1BD5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5B4u;
label_1bd5b4:
    // 0x1bd5b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bd5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bd5b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BD5B8u;
    SET_GPR_U32(ctx, 31, 0x1BD5C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BD5B8u, 0x1BD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5C0u;
label_1bd5c0:
    // 0x1bd5c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5c4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bd5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1bd5c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bd5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd5cc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1bd5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bd5d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD5D0u;
    {
        const bool branch_taken_0x1bd5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5d0) {
            ctx->pc = 0x1BD5F8u;
            goto label_1bd5f8;
        }
    }
    ctx->pc = 0x1BD5D8u;
    // 0x1bd5d8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BD5D8u;
    SET_GPR_U32(ctx, 31, 0x1BD5E0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BD5D8u, 0x1BD5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5E0u;
label_1bd5e0:
    // 0x1bd5e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD5E0u;
    {
        const bool branch_taken_0x1bd5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5e0) {
            ctx->pc = 0x1BD5F8u;
            goto label_1bd5f8;
        }
    }
    ctx->pc = 0x1BD5E8u;
    // 0x1bd5e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5ec: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd5f0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1BD5F0u;
    {
        const bool branch_taken_0x1bd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5f0) {
            ctx->pc = 0x1BD734u;
            goto label_1bd734;
        }
    }
    ctx->pc = 0x1BD5F8u;
label_1bd5f8:
    // 0x1bd5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bd5fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bd600: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1BD600u;
    {
        const bool branch_taken_0x1bd600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd600) {
            ctx->pc = 0x1BD734u;
            goto label_1bd734;
        }
    }
    ctx->pc = 0x1BD608u;
    // 0x1bd608: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd60c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd610: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bd610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bd614: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd618: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD618u;
    {
        const bool branch_taken_0x1bd618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd618) {
            ctx->pc = 0x1BD6ACu;
            goto label_1bd6ac;
        }
    }
    ctx->pc = 0x1BD620u;
    // 0x1bd620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd624: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd628: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd62c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd630: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd634: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1bd634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd638: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd63c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd644: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd64c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bd650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd654: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd658: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1bd658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd65c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd660: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd664: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd668: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1bd668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1bd66c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd674: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD674u;
    {
        const bool branch_taken_0x1bd674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd674) {
            ctx->pc = 0x1BD688u;
            goto label_1bd688;
        }
    }
    ctx->pc = 0x1BD67Cu;
    // 0x1bd67c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd680: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd684: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bd684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
label_1bd688:
    // 0x1bd688: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bd68c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd690: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bd690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bd694: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd698: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1bd698u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd69c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6a0: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1bd6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BD6A4u;
    {
        const bool branch_taken_0x1bd6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd6a4) {
            ctx->pc = 0x1BD6DCu;
            goto label_1bd6dc;
        }
    }
    ctx->pc = 0x1BD6ACu;
label_1bd6ac:
    // 0x1bd6ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd6b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd6b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6bc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1bd6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd6d0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bd6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6d8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1bd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1bd6dc:
    // 0x1bd6dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd6e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6e4: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1bd6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1bd6e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6ec: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bd6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd6f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6f4: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1bd6f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6fc: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd704: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1bd704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1bd708: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd70c: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1bd70cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd714: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bd718: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD718u;
    {
        const bool branch_taken_0x1bd718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd718) {
            ctx->pc = 0x1BD72Cu;
            goto label_1bd72c;
        }
    }
    ctx->pc = 0x1BD720u;
    // 0x1bd720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd724: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BD724u;
    SET_GPR_U32(ctx, 31, 0x1BD72Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BD724u, 0x1BD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD72Cu;
label_1bd72c:
    // 0x1bd72c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd730: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1bd734:
    // 0x1bd734: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bd734u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd73c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bd740: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD748u;
}
