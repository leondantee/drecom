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

// Function: Pad_set
// Address: 0x1a0e80 - 0x1a1360
void Pad_set_0x1a0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_set_0x1a0e80");
#endif

    switch (ctx->pc) {
        case 0x1a1130u: goto label_1a1130;
        default: break;
    }

    ctx->pc = 0x1a0e80u;

    // 0x1a0e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0e8c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1a0e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1a0e90: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1a0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1a0e94: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1a0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1a0e98: 0x24712760  addiu       $s1, $v1, 0x2760
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10080));
    // 0x1a0e9c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1a0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1a0ea0: 0x246380c0  addiu       $v1, $v1, -0x7F40
    ctx->pc = 0x1a0ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934720));
    // 0x1a0ea4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1a0ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a0ea8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1a0ea8u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3880C0u));
    // 0x1a0eac: 0x78630010  lq          $v1, 0x10($v1)
    ctx->pc = 0x1a0eacu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3880D0u));
    // 0x1a0eb0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1a0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1a0eb4: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x1a0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x1a0eb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1a0eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0ebc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0ec0: 0x10830122  beq         $a0, $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x1A0EC0u;
    {
        const bool branch_taken_0x1a0ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a0ec0) {
            ctx->pc = 0x1A134Cu;
            goto label_1a134c;
        }
    }
    ctx->pc = 0x1A0EC8u;
    // 0x1a0ec8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a0ecc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0ECCu;
    {
        const bool branch_taken_0x1a0ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ecc) {
            ctx->pc = 0x1A0ED8u;
            goto label_1a0ed8;
        }
    }
    ctx->pc = 0x1A0ED4u;
    // 0x1a0ed4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1a0ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a0ed8:
    // 0x1a0ed8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0edc: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1a0edcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ee0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ee4: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x1a0ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a0ee8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1a0ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a0eec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0ef0: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a0ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a0ef4: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1a0ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1a0ef8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0efc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1a0efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a0f00: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a0f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0f04: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f08: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0f08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a0f0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f10: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a0f14: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1A0F14u;
    {
        const bool branch_taken_0x1a0f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f14) {
            ctx->pc = 0x1A0FFCu;
            goto label_1a0ffc;
        }
    }
    ctx->pc = 0x1A0F1Cu;
    // 0x1a0f1c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f20: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f24: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0f28: 0x3063a000  andi        $v1, $v1, 0xA000
    ctx->pc = 0x1a0f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)40960);
    // 0x1a0f2c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A0F2Cu;
    {
        const bool branch_taken_0x1a0f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f2c) {
            ctx->pc = 0x1A0F8Cu;
            goto label_1a0f8c;
        }
    }
    ctx->pc = 0x1A0F34u;
    // 0x1a0f34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f38: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x1a0f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a0f3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0f40: 0x286100b1  slti        $at, $v1, 0xB1
    ctx->pc = 0x1a0f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x1a0f44: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0F44u;
    {
        const bool branch_taken_0x1a0f44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f44) {
            ctx->pc = 0x1A0F60u;
            goto label_1a0f60;
        }
    }
    ctx->pc = 0x1A0F4Cu;
    // 0x1a0f4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f50: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f54: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1a0f58: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f5c: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_1a0f60:
    // 0x1a0f60: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f64: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x1a0f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1a0f68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0f6c: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x1a0f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x1a0f70: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0F70u;
    {
        const bool branch_taken_0x1a0f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f70) {
            ctx->pc = 0x1A0F8Cu;
            goto label_1a0f8c;
        }
    }
    ctx->pc = 0x1A0F78u;
    // 0x1a0f78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f7c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f80: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x1a0f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1a0f84: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f88: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_1a0f8c:
    // 0x1a0f8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0f90: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0f94: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a0f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a0f98: 0x30635000  andi        $v1, $v1, 0x5000
    ctx->pc = 0x1a0f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)20480);
    // 0x1a0f9c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A0F9Cu;
    {
        const bool branch_taken_0x1a0f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0f9c) {
            ctx->pc = 0x1A0FFCu;
            goto label_1a0ffc;
        }
    }
    ctx->pc = 0x1A0FA4u;
    // 0x1a0fa4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fa8: 0x90630039  lbu         $v1, 0x39($v1)
    ctx->pc = 0x1a0fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x1a0fac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0fb0: 0x286100b1  slti        $at, $v1, 0xB1
    ctx->pc = 0x1a0fb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x1a0fb4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0FB4u;
    {
        const bool branch_taken_0x1a0fb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fb4) {
            ctx->pc = 0x1A0FD0u;
            goto label_1a0fd0;
        }
    }
    ctx->pc = 0x1A0FBCu;
    // 0x1a0fbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fc0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0fc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0fc4: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x1a0fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1a0fc8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fcc: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_1a0fd0:
    // 0x1a0fd0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fd4: 0x90630039  lbu         $v1, 0x39($v1)
    ctx->pc = 0x1a0fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x1a0fd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0fdc: 0x28610050  slti        $at, $v1, 0x50
    ctx->pc = 0x1a0fdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x1a0fe0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0FE0u;
    {
        const bool branch_taken_0x1a0fe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0fe0) {
            ctx->pc = 0x1A0FFCu;
            goto label_1a0ffc;
        }
    }
    ctx->pc = 0x1A0FE8u;
    // 0x1a0fe8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0fec: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a0fecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0ff0: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1a0ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1a0ff4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ff8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x1a0ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_1a0ffc:
    // 0x1a0ffc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a0ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1000: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a1000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1004: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1008: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a100c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1a100cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1010: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1014: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a1014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a1018: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a101c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a101cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1020: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1024: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a1024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1028: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a102c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1030: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x1a1030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1034: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1038: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a1038u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a103c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a103cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1040: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1044: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1a1044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1048: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a104c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x1a104cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x1a1050: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1054: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1a1054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1a1058: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a105c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1060: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1064: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1068: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x1a1068u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a106c: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x1a106cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a1070: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1074: 0xa0640036  sb          $a0, 0x36($v1)
    ctx->pc = 0x1a1074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 54), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1078: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x1a1078u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x1a107c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1080: 0xa0640037  sb          $a0, 0x37($v1)
    ctx->pc = 0x1a1080u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 55), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1084: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x1a1084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1a1088: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a108c: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x1a108cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1090: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x1a1090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1a1094: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1098: 0xa0640039  sb          $a0, 0x39($v1)
    ctx->pc = 0x1a1098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a109c: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x1a109cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a10a0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10a4: 0xa064003d  sb          $a0, 0x3D($v1)
    ctx->pc = 0x1a10a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 61), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10a8: 0x92240009  lbu         $a0, 0x9($s1)
    ctx->pc = 0x1a10a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1a10ac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10b0: 0xa064003c  sb          $a0, 0x3C($v1)
    ctx->pc = 0x1a10b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 60), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10b4: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x1a10b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1a10b8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10bc: 0xa064003a  sb          $a0, 0x3A($v1)
    ctx->pc = 0x1a10bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 58), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10c0: 0x9224000b  lbu         $a0, 0xB($s1)
    ctx->pc = 0x1a10c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1a10c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10c8: 0xa064003b  sb          $a0, 0x3B($v1)
    ctx->pc = 0x1a10c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 59), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10cc: 0x9224000c  lbu         $a0, 0xC($s1)
    ctx->pc = 0x1a10ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a10d0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10d4: 0xa064003e  sb          $a0, 0x3E($v1)
    ctx->pc = 0x1a10d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 62), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10d8: 0x9224000d  lbu         $a0, 0xD($s1)
    ctx->pc = 0x1a10d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x1a10dc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10e0: 0xa0640041  sb          $a0, 0x41($v1)
    ctx->pc = 0x1a10e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10e4: 0x9224000e  lbu         $a0, 0xE($s1)
    ctx->pc = 0x1a10e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1a10e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10ec: 0xa064003f  sb          $a0, 0x3F($v1)
    ctx->pc = 0x1a10ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 63), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10f0: 0x9224000f  lbu         $a0, 0xF($s1)
    ctx->pc = 0x1a10f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x1a10f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10f8: 0xa0640040  sb          $a0, 0x40($v1)
    ctx->pc = 0x1a10f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a10fc: 0x92240010  lbu         $a0, 0x10($s1)
    ctx->pc = 0x1a10fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a1100: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1104: 0xa0640042  sb          $a0, 0x42($v1)
    ctx->pc = 0x1a1104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1108: 0x92240011  lbu         $a0, 0x11($s1)
    ctx->pc = 0x1a1108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x1a110c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1110: 0xa0640043  sb          $a0, 0x43($v1)
    ctx->pc = 0x1a1110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1114: 0x92240012  lbu         $a0, 0x12($s1)
    ctx->pc = 0x1a1114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1a1118: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a111c: 0xa0640044  sb          $a0, 0x44($v1)
    ctx->pc = 0x1a111cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1120: 0x92240013  lbu         $a0, 0x13($s1)
    ctx->pc = 0x1a1120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x1a1124: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1128: 0xa0640045  sb          $a0, 0x45($v1)
    ctx->pc = 0x1a1128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 69), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a112c: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a1130:
    // 0x1a1130: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1134: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a1134u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1138: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a1138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a113c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1140: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x1a1140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a1144: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1148: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a1148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a114c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1150: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1154: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1a1154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1a1158: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A1158u;
    {
        const bool branch_taken_0x1a1158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1158) {
            ctx->pc = 0x1A11C0u;
            goto label_1a11c0;
        }
    }
    ctx->pc = 0x1A1160u;
    // 0x1a1160: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a1164: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1168: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a116c: 0xa0640016  sb          $a0, 0x16($v1)
    ctx->pc = 0x1a116cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1174: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1178: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a117c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1180: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a1180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a1184: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a1188: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1188u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a118c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1a118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a1190: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1194: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1198: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x1a1198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a119c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a11a0: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a11a4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a11a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a11a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a11a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11ac: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a11acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a11b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a11b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a11b4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a11b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a11b8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1A11B8u;
    {
        const bool branch_taken_0x1a11b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11b8) {
            ctx->pc = 0x1A1340u;
            goto label_1a1340;
        }
    }
    ctx->pc = 0x1A11C0u;
label_1a11c0:
    // 0x1a11c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11c4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a11c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a11c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a11cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a11d0: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a11d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a11d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a11d8: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A11D8u;
    {
        const bool branch_taken_0x1a11d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11d8) {
            ctx->pc = 0x1A12E4u;
            goto label_1a12e4;
        }
    }
    ctx->pc = 0x1A11E0u;
    // 0x1a11e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a11e8: 0x80630016  lb          $v1, 0x16($v1)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x1a11ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A11ECu;
    {
        const bool branch_taken_0x1a11ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11ec) {
            ctx->pc = 0x1A1230u;
            goto label_1a1230;
        }
    }
    ctx->pc = 0x1A11F4u;
    // 0x1a11f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11f8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a11fc: 0x80830016  lb          $v1, 0x16($a0)
    ctx->pc = 0x1a11fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1a1200: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1204: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x1a1204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a120c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a120cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1210: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a1214: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1218: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a121c: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a121cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a1220: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a1220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a1224: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A1228u;
    {
        const bool branch_taken_0x1a1228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1228) {
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1230u;
label_1a1230:
    // 0x1a1230: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a1230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1234: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1238: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a123c: 0xa0640016  sb          $a0, 0x16($v1)
    ctx->pc = 0x1a123cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a1240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1244: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1248: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a124c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1250: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a1250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a1254: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a1258: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a125c: 0x0  nop
    ctx->pc = 0x1a125cu;
    // NOP
label_1a1260:
    // 0x1a1260: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1264: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1268: 0x80630026  lb          $v1, 0x26($v1)
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1a126c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A126Cu;
    {
        const bool branch_taken_0x1a126c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a126c) {
            ctx->pc = 0x1A12B0u;
            goto label_1a12b0;
        }
    }
    ctx->pc = 0x1A1274u;
    // 0x1a1274: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1278: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a127c: 0x80830026  lb          $v1, 0x26($a0)
    ctx->pc = 0x1a127cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x1a1280: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1284: 0xa0830026  sb          $v1, 0x26($a0)
    ctx->pc = 0x1a1284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a128c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1290: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1290u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a1294: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1298: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a129c: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a129cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a12a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a12a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a12a4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a12a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a12a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A12A8u;
    {
        const bool branch_taken_0x1a12a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a8) {
            ctx->pc = 0x1A1340u;
            goto label_1a1340;
        }
    }
    ctx->pc = 0x1A12B0u;
label_1a12b0:
    // 0x1a12b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a12b4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a12bc: 0xa0640026  sb          $a0, 0x26($v1)
    ctx->pc = 0x1a12bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a12c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12c4: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a12c8: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a12c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a12cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a12ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12d0: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a12d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a12d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a12d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a12d8: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a12d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a12dc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A12DCu;
    {
        const bool branch_taken_0x1a12dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12dc) {
            ctx->pc = 0x1A1340u;
            goto label_1a1340;
        }
    }
    ctx->pc = 0x1A12E4u;
label_1a12e4:
    // 0x1a12e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12e8: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a12ec: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a12f0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a12f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a12f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12f8: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a12f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a12fc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a12fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a1300: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1304: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1308: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a130c: 0xa0600016  sb          $zero, 0x16($v1)
    ctx->pc = 0x1a130cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1314: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1318: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1318u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a131c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a131cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1320: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1324: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a1324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a1328: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a132c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a132cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1330: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1334: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1338: 0xa0600026  sb          $zero, 0x26($v1)
    ctx->pc = 0x1a1338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a133c: 0x0  nop
    ctx->pc = 0x1a133cu;
    // NOP
label_1a1340:
    // 0x1a1340: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a1344: 0x601ff7a  bgez        $s0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1A1344u;
    {
        const bool branch_taken_0x1a1344 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a1344) {
            ctx->pc = 0x1A1130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1130;
        }
    }
    ctx->pc = 0x1A134Cu;
label_1a134c:
    // 0x1a134c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a134cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1354: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a1354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a1358: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1360u;
}
