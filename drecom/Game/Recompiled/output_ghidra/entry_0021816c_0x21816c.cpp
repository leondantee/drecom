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

// Function: entry_0021816c
// Address: 0x21816c - 0x218298
void entry_0021816c_0x21816c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021816c_0x21816c");
#endif

    switch (ctx->pc) {
        case 0x2181d4u: goto label_2181d4;
        case 0x21826cu: goto label_21826c;
        default: break;
    }

    ctx->pc = 0x21816cu;

    // 0x21816c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21816cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x218170: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x218170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218174: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218178: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21817c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x218184: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x218184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x218188: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21818c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x218190: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x218190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218194: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x218194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x218198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21819c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2181a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2181a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2181a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2181a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2181a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2181a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2181ac: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2181acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2181b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2181b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2181b4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2181b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2181b8: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x2181b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2181bc: 0x24041109  addiu       $a0, $zero, 0x1109
    ctx->pc = 0x2181bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4361));
    // 0x2181c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2181c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2181c4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2181c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2181c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2181cc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2181CCu;
    SET_GPR_U32(ctx, 31, 0x2181D4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2181CCu, 0x2181D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181D4u;
label_2181d4:
    // 0x2181d4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2181d8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2181d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2181dc: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x2181dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2181e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2181e4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2181e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2181e8: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2181e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2181ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2181ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2181f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2181f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2181f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2181f8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2181f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2181fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218200: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218204: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x218204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x218208: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21820c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21820cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218210: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x218210u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x218214: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218218: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218218u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21821c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21821cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x218220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218224: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218224u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218228: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x218228u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21822c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218230: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218234: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x218234u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x218238: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21823c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21823cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218240: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x218240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x218244: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218248: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21824c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21824cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x218250: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218254: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x218254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x218258: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x218258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21825c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218260: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x218260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x218264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x218264u;
    SET_GPR_U32(ctx, 31, 0x21826Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x218264u, 0x21826Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21826Cu;
label_21826c:
    // 0x21826c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21826cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218270: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x218270u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x218274: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x218274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x218278: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x218278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21827c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21827cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x218280: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x218280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x218284: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x218284u;
    {
        const bool branch_taken_0x218284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x218284) {
            ctx->pc = 0x218298u;
            return;
        }
    }
    ctx->pc = 0x21828Cu;
    // 0x21828c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21828cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x218290: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x218290u;
    {
        const bool branch_taken_0x218290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218290) {
            ctx->pc = 0x2182B8u;
            return;
        }
    }
    ctx->pc = 0x218298u;
}
