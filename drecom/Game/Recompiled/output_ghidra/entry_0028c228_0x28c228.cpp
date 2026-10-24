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

// Function: entry_0028c228
// Address: 0x28c228 - 0x28c42c
void entry_0028c228_0x28c228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c228_0x28c228");
#endif

    switch (ctx->pc) {
        case 0x28c238u: goto label_28c238;
        default: break;
    }

    ctx->pc = 0x28c228u;

    // 0x28c228: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28c228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c22c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x28c22cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x28c230: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C230u;
    SET_GPR_U32(ctx, 31, 0x28C238u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C230u, 0x28C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C238u;
label_28c238:
    // 0x28c238: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28c23c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28c23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28c240: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x28c240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x28c244: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c248: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x28c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28c24c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x28c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c250: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x28c250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x28c254: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x28c254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c258: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x28c258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28c25c: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x28c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c260: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28c260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c264: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c268: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28c268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c26c: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28c270: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28c270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28c274: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28c274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28c278: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28c278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28c27c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x28c27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28c280: 0x26830018  addiu       $v1, $s4, 0x18
    ctx->pc = 0x28c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x28c284: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28c284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28c288: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c28c: 0x2683001c  addiu       $v1, $s4, 0x1C
    ctx->pc = 0x28c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x28c290: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28c290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28c294: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x28c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x28c298: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x28c298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28c29c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28c2a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x28c2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c2a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c2a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c2ac: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c2b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28c2b4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28c2b8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28c2b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c2bc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x28c2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c2c0: 0x26850024  addiu       $a1, $s4, 0x24
    ctx->pc = 0x28c2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x28c2c4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x28c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x28c2c8: 0x3402fffb  ori         $v0, $zero, 0xFFFB
    ctx->pc = 0x28c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c2cc: 0x26840028  addiu       $a0, $s4, 0x28
    ctx->pc = 0x28c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x28c2d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x28c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x28c2d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x28c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x28c2d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x28c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c2dc: 0x24827000  addiu       $v0, $a0, 0x7000
    ctx->pc = 0x28c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 28672));
    // 0x28c2e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28c2e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c2e4: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x28c2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x28c2e8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x28c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x28c2ec: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x28c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c2f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c2f4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x28c2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28c2f8: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x28c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x28c2fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28c300: 0x3404fffb  ori         $a0, $zero, 0xFFFB
    ctx->pc = 0x28c300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c304: 0x26830034  addiu       $v1, $s4, 0x34
    ctx->pc = 0x28c304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x28c308: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x28c308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x28c30c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x28c310: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x28c310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28c314: 0x24637000  addiu       $v1, $v1, 0x7000
    ctx->pc = 0x28c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x28c318: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28c318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c31c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x28c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x28c320: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c324: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x28c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x28c328: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28c328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28c32c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x28c32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28c330: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x28c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
    // 0x28c334: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c338: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x28c338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x28c33c: 0x26840040  addiu       $a0, $s4, 0x40
    ctx->pc = 0x28c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x28c340: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c344: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x28c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x28c348: 0x34448080  ori         $a0, $v0, 0x8080
    ctx->pc = 0x28c348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x28c34c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x28c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x28c350: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x28c350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x28c354: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28c354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c358: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x28c358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28c35c: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x28C35Cu;
    {
        const bool branch_taken_0x28c35c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c35c) {
            ctx->pc = 0x28C42Cu;
            return;
        }
    }
    ctx->pc = 0x28C364u;
    // 0x28c364: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c368: 0x94232240  lhu         $v1, 0x2240($at)
    ctx->pc = 0x28c368u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622240u));
    // 0x28c36c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x28c36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c370: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x28c370u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28c374: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c378: 0x94242242  lhu         $a0, 0x2242($at)
    ctx->pc = 0x28c378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x622242u));
    // 0x28c37c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x28c37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x28c380: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x28c380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28c384: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x28c384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c388: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x28c388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x28c38c: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x28c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x28c390: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28c390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28c394: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c398: 0x94222244  lhu         $v0, 0x2244($at)
    ctx->pc = 0x28c398u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622244u));
    // 0x28c39c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28c39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c3a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x28c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28c3a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3a8: 0x94232242  lhu         $v1, 0x2242($at)
    ctx->pc = 0x28c3a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622242u));
    // 0x28c3ac: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c3b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28c3b4: 0x3ac00  sll         $s5, $v1, 16
    ctx->pc = 0x28c3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c3b8: 0x551825  or          $v1, $v0, $s5
    ctx->pc = 0x28c3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x28c3bc: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x28c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x28c3c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28c3c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3c8: 0x94222240  lhu         $v0, 0x2240($at)
    ctx->pc = 0x28c3c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622240u));
    // 0x28c3cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x28c3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c3d0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x28c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28c3d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3d8: 0x94222246  lhu         $v0, 0x2246($at)
    ctx->pc = 0x28c3d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x622246u));
    // 0x28c3dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28c3dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28c3e0: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x28c3e4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x28c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c3e8: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x28c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x28c3ec: 0x2687002c  addiu       $a3, $s4, 0x2C
    ctx->pc = 0x28c3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x28c3f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x28c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x28c3f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c3f8: 0x94232244  lhu         $v1, 0x2244($at)
    ctx->pc = 0x28c3f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622244u));
    // 0x28c3fc: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x28c3fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c400: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28c404: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28c404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28c408: 0x94232246  lhu         $v1, 0x2246($at)
    ctx->pc = 0x28c408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x622246u));
    // 0x28c40c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28c40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28c410: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28c410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28c414: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x28c414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28c418: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x28c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x28c41c: 0x26950038  addiu       $s5, $s4, 0x38
    ctx->pc = 0x28c41cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x28c420: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x28c420u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x28c424: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28C424u;
    {
        const bool branch_taken_0x28c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c424) {
            ctx->pc = 0x28C470u;
            return;
        }
    }
    ctx->pc = 0x28C42Cu;
}
