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

// Function: entry_001a8aa4
// Address: 0x1a8aa4 - 0x1a8d40
void entry_001a8aa4_0x1a8aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8aa4_0x1a8aa4");
#endif

    switch (ctx->pc) {
        case 0x1a8d04u: goto label_1a8d04;
        case 0x1a8d18u: goto label_1a8d18;
        default: break;
    }

    ctx->pc = 0x1a8aa4u;

    // 0x1a8aa4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1a8aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a8aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8aac: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8ab0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8ab4: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x1a8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1a8ab8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8abc: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8ac0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8ac4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8ac8: 0x26020694  addiu       $v0, $s0, 0x694
    ctx->pc = 0x1a8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1684));
    // 0x1a8acc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8ad0: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8ad4: 0x26020698  addiu       $v0, $s0, 0x698
    ctx->pc = 0x1a8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1688));
    // 0x1a8ad8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8adc: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1a8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1a8ae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8ae4: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8ae8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8aec: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x1a8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1a8af0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8af4: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8af8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8afc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8b00: 0x2602069c  addiu       $v0, $s0, 0x69C
    ctx->pc = 0x1a8b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1692));
    // 0x1a8b04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8b08: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8b0c: 0x260206a0  addiu       $v0, $s0, 0x6A0
    ctx->pc = 0x1a8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1696));
    // 0x1a8b10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8b14: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x1a8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1a8b18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8b1c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8b20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8b24: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x1a8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1a8b28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8b2c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8b30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8b34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8b38: 0x260206a4  addiu       $v0, $s0, 0x6A4
    ctx->pc = 0x1a8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1700));
    // 0x1a8b3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8b40: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8b44: 0x260206a8  addiu       $v0, $s0, 0x6A8
    ctx->pc = 0x1a8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1704));
    // 0x1a8b48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8b4c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1a8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a8b50: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8b54: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8b58: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8b5c: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x1a8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1a8b60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8b64: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8b68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8b6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8b70: 0x260206ac  addiu       $v0, $s0, 0x6AC
    ctx->pc = 0x1a8b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1708));
    // 0x1a8b74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8b78: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8b7c: 0x260206b0  addiu       $v0, $s0, 0x6B0
    ctx->pc = 0x1a8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1712));
    // 0x1a8b80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8b84: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1a8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a8b88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8b8c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8b90: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8b94: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x1a8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x1a8b98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8b9c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8ba0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8ba4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8ba8: 0x260206b4  addiu       $v0, $s0, 0x6B4
    ctx->pc = 0x1a8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1716));
    // 0x1a8bac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8bb0: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8bb4: 0x260206b8  addiu       $v0, $s0, 0x6B8
    ctx->pc = 0x1a8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1720));
    // 0x1a8bb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8bbc: 0x24140158  addiu       $s4, $zero, 0x158
    ctx->pc = 0x1a8bbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
    // 0x1a8bc0: 0x92220306  lbu         $v0, 0x306($s1)
    ctx->pc = 0x1a8bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 774)));
    // 0x1a8bc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a8bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a8bc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a8bcc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1a8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1a8bd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8bd4: 0x245500f6  addiu       $s5, $v0, 0xF6
    ctx->pc = 0x1a8bd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 246));
    // 0x1a8bd8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1a8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1a8bdc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8be0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8be4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8be8: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x1a8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x1a8bec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8bf0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8bf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8bf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8bfc: 0x260206c8  addiu       $v0, $s0, 0x6C8
    ctx->pc = 0x1a8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1a8c00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8c04: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8c08: 0x260206cc  addiu       $v0, $s0, 0x6CC
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1740));
    // 0x1a8c0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8c10: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x1a8c14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8c18: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8c1c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8c20: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x1a8c24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8c28: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8c2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8c30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8c34: 0x260206d0  addiu       $v0, $s0, 0x6D0
    ctx->pc = 0x1a8c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x1a8c38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8c3c: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8c40: 0x260206d4  addiu       $v0, $s0, 0x6D4
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x1a8c44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8c48: 0x26820028  addiu       $v0, $s4, 0x28
    ctx->pc = 0x1a8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x1a8c4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8c50: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8c54: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8c58: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x1a8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1a8c5c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8c60: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8c64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8c68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8c6c: 0x260206d8  addiu       $v0, $s0, 0x6D8
    ctx->pc = 0x1a8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x1a8c70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8c74: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8c78: 0x260206dc  addiu       $v0, $s0, 0x6DC
    ctx->pc = 0x1a8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1756));
    // 0x1a8c7c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8c80: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1a8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1a8c84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8c88: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8c8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8c90: 0x26a20008  addiu       $v0, $s5, 0x8
    ctx->pc = 0x1a8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1a8c94: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8c98: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8c9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8ca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8ca4: 0x260206e0  addiu       $v0, $s0, 0x6E0
    ctx->pc = 0x1a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1760));
    // 0x1a8ca8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8cac: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8cb0: 0x260206e4  addiu       $v0, $s0, 0x6E4
    ctx->pc = 0x1a8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1764));
    // 0x1a8cb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8cb8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1a8cbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a8cc0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x1a8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x1a8cc4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a8cc8: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x1a8ccc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8cd0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1a8cd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8cd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a8cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a8cdc: 0x260206e8  addiu       $v0, $s0, 0x6E8
    ctx->pc = 0x1a8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1768));
    // 0x1a8ce0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8ce4: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x1a8ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1a8ce8: 0x260206ec  addiu       $v0, $s0, 0x6EC
    ctx->pc = 0x1a8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1772));
    // 0x1a8cec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8cf0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8cf4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8cf8: 0x26050688  addiu       $a1, $s0, 0x688
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1672));
    // 0x1a8cfc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8CFCu;
    SET_GPR_U32(ctx, 31, 0x1A8D04u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8CFCu, 0x1A8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D04u;
label_1a8d04:
    // 0x1a8d04: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8d08: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8d0c: 0x260506bc  addiu       $a1, $s0, 0x6BC
    ctx->pc = 0x1a8d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
    // 0x1a8d10: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8D10u;
    SET_GPR_U32(ctx, 31, 0x1A8D18u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8D10u, 0x1A8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D18u;
label_1a8d18:
    // 0x1a8d18: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1a8d18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a8d1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a8d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8d20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a8d20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a8d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a8d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8d34: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a8d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a8d38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8D40u;
}
