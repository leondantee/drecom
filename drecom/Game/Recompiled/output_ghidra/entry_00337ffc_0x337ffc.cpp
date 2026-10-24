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

// Function: entry_00337ffc
// Address: 0x337ffc - 0x338360
void entry_00337ffc_0x337ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337ffc_0x337ffc");
#endif

    switch (ctx->pc) {
        case 0x33800cu: goto label_33800c;
        case 0x3381e4u: goto label_3381e4;
        case 0x338214u: goto label_338214;
        case 0x338290u: goto label_338290;
        case 0x3382c0u: goto label_3382c0;
        case 0x3382f8u: goto label_3382f8;
        case 0x338320u: goto label_338320;
        default: break;
    }

    ctx->pc = 0x337ffcu;

    // 0x337ffc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x337ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x338000: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x338000u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x338004: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x338004u;
    SET_GPR_U32(ctx, 31, 0x33800Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x338004u, 0x33800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33800Cu;
label_33800c:
    // 0x33800c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x33800cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x338010: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x338010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x338014: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x338014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x338018: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x338018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x33801c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x33801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x338020: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x338020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x338024: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x338024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x338028: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x338028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x33802c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x338030: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x338030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338034: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x338034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x338038: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x338038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x33803c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33803cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x338040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338044: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x338044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x338048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x338048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33804c: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x33804cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x338050: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x338050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x338054: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x338058: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x338058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x33805c: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x33805cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x338060: 0x24c27000  addiu       $v0, $a2, 0x7000
    ctx->pc = 0x338060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x338064: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x338064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338068: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x338068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x33806c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x33806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x338070: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x338074: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x338074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338078: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x338078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x33807c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33807cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x338080: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x338080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x338084: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x338084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x338088: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33808c: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x33808cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x338090: 0x24a27000  addiu       $v0, $a1, 0x7000
    ctx->pc = 0x338090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x338094: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x338094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338098: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x338098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33809c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33809cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3380a0: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x3380a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3380a4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3380a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3380a8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3380a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3380ac: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x3380acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3380b0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3380b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3380b4: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3380b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3380b8: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x3380b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x3380bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3380bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3380c0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x3380c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x3380c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3380c8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3380c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3380cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3380ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3380d0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3380d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3380d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3380d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3380d8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3380d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3380dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3380dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3380e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3380e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3380e4: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x3380e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x3380e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3380e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3380ec: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3380ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3380f0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3380f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3380f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3380f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3380f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3380fc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x3380fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x338100: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x338100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x338104: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x338104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x338108: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33810c: 0x94224eb0  lhu         $v0, 0x4EB0($at)
    ctx->pc = 0x33810cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB0u));
    // 0x338110: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338114: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x338114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x338118: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33811c: 0x94224eb2  lhu         $v0, 0x4EB2($at)
    ctx->pc = 0x33811cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB2u));
    // 0x338120: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338124: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x338124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x338128: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33812c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338130: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x338130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x338134: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x338134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x338138: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33813c: 0x94224eb4  lhu         $v0, 0x4EB4($at)
    ctx->pc = 0x33813cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB4u));
    // 0x338140: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338144: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x338144u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x338148: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33814c: 0x94234eb2  lhu         $v1, 0x4EB2($at)
    ctx->pc = 0x33814cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894EB2u));
    // 0x338150: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x338150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x338154: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x338154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x338158: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x338158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x33815c: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x33815cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x338160: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x338160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x338164: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x338164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x338168: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33816c: 0x94224eb0  lhu         $v0, 0x4EB0($at)
    ctx->pc = 0x33816cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB0u));
    // 0x338170: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x338170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338174: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x338174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x338178: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33817c: 0x94254eb6  lhu         $a1, 0x4EB6($at)
    ctx->pc = 0x33817cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x894EB6u));
    // 0x338180: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x338180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x338184: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x338184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x338188: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33818c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338190: 0x2643002c  addiu       $v1, $s2, 0x2C
    ctx->pc = 0x338190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x338194: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x338194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x338198: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33819c: 0x94224eb4  lhu         $v0, 0x4EB4($at)
    ctx->pc = 0x33819cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB4u));
    // 0x3381a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3381a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3381a4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3381a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3381a8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3381a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3381ac: 0x94234eb6  lhu         $v1, 0x4EB6($at)
    ctx->pc = 0x3381acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894EB6u));
    // 0x3381b0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3381b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3381b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3381b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3381b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3381b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3381bc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x3381bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3381c0: 0x26420038  addiu       $v0, $s2, 0x38
    ctx->pc = 0x3381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x3381c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3381c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3381c8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3381c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3381cc: 0x24424e88  addiu       $v0, $v0, 0x4E88
    ctx->pc = 0x3381ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20104));
    // 0x3381d0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3381d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3381d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3381d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3381d8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3381d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3381dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3381DCu;
    SET_GPR_U32(ctx, 31, 0x3381E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3381DCu, 0x3381E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3381E4u;
label_3381e4:
    // 0x3381e4: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x3381e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x3381e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3381e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3381ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3381ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3381f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3381f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3381f4: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x3381f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3381f8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3381f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3381fc: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3381fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x338200: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x338200u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x338204: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x338204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x338208: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x338208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33820c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x33820Cu;
    SET_GPR_U32(ctx, 31, 0x338214u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x33820Cu, 0x338214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338214u;
label_338214:
    // 0x338214: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x338214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x338218: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33821c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x33821cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x338220: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x338220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x338224: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x338224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x338228: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x338228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x33822c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338230: 0x94224eb0  lhu         $v0, 0x4EB0($at)
    ctx->pc = 0x338230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB0u));
    // 0x338234: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338238: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x338238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x33823c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x33823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x338240: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338244: 0x94234eb4  lhu         $v1, 0x4EB4($at)
    ctx->pc = 0x338244u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x894EB4u));
    // 0x338248: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x338248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33824c: 0x41bb8  dsll        $v1, $a0, 14
    ctx->pc = 0x33824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 14);
    // 0x338250: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x338250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338254: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x338258: 0x94224eb2  lhu         $v0, 0x4EB2($at)
    ctx->pc = 0x338258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894EB2u));
    // 0x33825c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x338260: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x338260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x338264: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x338264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x338268: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x338268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33826c: 0x94244eb6  lhu         $a0, 0x4EB6($at)
    ctx->pc = 0x33826cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x894EB6u));
    // 0x338270: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x338270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x338274: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x338274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x338278: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x338278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x33827c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x33827cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x338280: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x338280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x338284: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x338284u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x338288: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x338288u;
    SET_GPR_U32(ctx, 31, 0x338290u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x338288u, 0x338290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338290u;
label_338290:
    // 0x338290: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x338290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x338294: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x338294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x338298: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x338298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x33829c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x33829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3382a0: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x3382a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x3382a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3382a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3382a8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x3382a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3382ac: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3382acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x3382b0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3382b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3382b4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3382b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3382b8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3382B8u;
    SET_GPR_U32(ctx, 31, 0x3382C0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3382B8u, 0x3382C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382C0u;
label_3382c0:
    // 0x3382c0: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x3382c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3382c4: 0x72608e28  paddub      $s1, $s3, $zero
    ctx->pc = 0x3382c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3382c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3382c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3382cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3382ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3382d0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3382d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3382d4: 0x3442103b  ori         $v0, $v0, 0x103B
    ctx->pc = 0x3382d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4155);
    // 0x3382d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3382d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3382dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3382dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3382e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3382e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3382e4: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x3382e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x3382e8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3382e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3382ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x3382ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3382f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3382F0u;
    SET_GPR_U32(ctx, 31, 0x3382F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3382F0u, 0x3382F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3382F8u;
label_3382f8:
    // 0x3382f8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3382f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3382fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3382fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x338300: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x338300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x338304: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x338304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x338308: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x338308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x33830c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x33830cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x338310: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x338310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x338314: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x338314u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x338318: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x338318u;
    SET_GPR_U32(ctx, 31, 0x338320u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x338318u, 0x338320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338320u;
label_338320:
    // 0x338320: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x338320u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x338324: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x338324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x338328: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x338328u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x33832c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x33832cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x338330: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x338330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x338334: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x338334u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x338338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33833c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33833cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x338340: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x338340u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338344: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x338344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33834c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33834cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338354: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x338358: 0x3e00008  jr          $ra
    ctx->pc = 0x338358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338360u;
}
